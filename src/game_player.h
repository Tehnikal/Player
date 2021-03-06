/*
 * This file is part of EasyRPG Player.
 *
 * EasyRPG Player is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EasyRPG Player is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef EP_GAME_PLAYER_H
#define EP_GAME_PLAYER_H

// Headers
#include "rpg_music.h"
#include "rpg_savepartylocation.h"
#include "game_character.h"
#include "flag_set.h"
#include "teleport_target.h"
#include <vector>

class Game_Vehicle;
namespace RPG {
	class SaveTarget;
}

/**
 * Game Player class
 */
class Game_Player : public Game_Character {
public:
	Game_Player();

	/**
	 * Implementation of abstract methods
	 */
	/** @{ */
	int GetScreenZ(bool apply_shift = false) const override;
	bool GetVisible() const override;
	bool MakeWay(int x, int y) const override;
	void BeginMove() override;
	int GetVehicleType() const override;
	void UpdateSelfMovement() override;
	void OnMoveFailed(int x, int y) override;
	/** @} */

	bool IsPendingTeleport() const;
	TeleportTarget GetTeleportTarget() const;

	/**
	 * Sets the map, position and direction that the game player must have after the teleport is over
	 *
	 * @param map_id Id of the target map
	 * @param x new x position after teleport
	 * @param y new y position after teleport
	 * @param direction New direction after teleport. If -1, the direction isn't changed.
	 */
	void ReserveTeleport(int map_id, int x, int y, int direction);
	void ReserveTeleport(const RPG::SaveTarget& target);
	void PerformTeleport();

	void MoveTo(int x, int y) override;

	/** Update this for the current frame */
	void Update();

	void Refresh();

	/*
	 * Overridden to convince Game_Character we aren't stopped if boarding/unboarding.
	 * Consider calling this 'IsReadyToMove' or something, and 'IsMovable' -> 'IsPlayerMovable'
	 */
	bool IsStopping() const override;

	bool GetOnOffVehicle();
	bool IsMovable() const;
	bool InVehicle() const;
	bool InAirship() const;
	bool IsAboard() const;
	bool IsBoardingOrUnboarding() const;
	Game_Vehicle* GetVehicle() const;

	/**
	 * Callback function invoked by the Vehicle to notify that the unboarding has finished
	 */
	void UnboardingFinished();

protected:
	RPG::SavePartyLocation* data();
	const RPG::SavePartyLocation* data() const;
private:
	using TriggerSet = FlagSet<RPG::EventPage::Trigger>;

	void UpdateScroll(int prev_x, int prev_y);
	void UpdatePan();
	bool CheckActionEvent();
	bool CheckEventTriggerHere(TriggerSet triggers, bool face_hero, bool triggered_by_decision_key);
	bool CheckEventTriggerThere(TriggerSet triggers, int x, int y, bool face_hero, bool triggered_by_decision_key);
	bool GetOnVehicle();
	bool GetOffVehicle();
	void Unboard();

	TeleportTarget teleport_target;
};

inline RPG::SavePartyLocation* Game_Player::data() {
	return static_cast<RPG::SavePartyLocation*>(Game_Character::data());
}

inline const RPG::SavePartyLocation* Game_Player::data() const {
	return static_cast<const RPG::SavePartyLocation*>(Game_Character::data());
}

inline bool Game_Player::IsPendingTeleport() const {
	return teleport_target.IsActive();
}

inline TeleportTarget Game_Player::GetTeleportTarget() const {
	return teleport_target;
}

#endif
