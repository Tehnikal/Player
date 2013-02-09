﻿#ifndef EASYRPG_RTP_TABLE_BOM
#define EASYRPG_RTP_TABLE_BOM

#include <boost/assign/list_of.hpp>
#include <map>

using boost::assign::list_of;
using boost::assign::map_list_of;

typedef std::map<std::string, std::string> sub_map_type;
typedef std::pair<std::string, std::string> sub_map_pair;
static sub_map_type sub_map;

typedef std::map<std::string, std::map<std::string, std::string> > rtp_table_type;

/*
 * { folder: { ASCII, UTF-8 } }
 */
rtp_table_type const RTP_TABLE_2003 = map_list_of
	("backdrop", list_of<sub_map_pair>
	 ("graveyard", "お墓")
	 ("shrine", "お寺")
	 ("dungeon1", "ダンジョン１")
	 ("dungeon2", "ダンジョン２")
	 ("dungeon3", "ダンジョン３")
	 ("dungeon4", "ダンジョン４")
	 ("dungeon5", "ダンジョン５")
	 ("dungeon6", "ダンジョン６")
	 ("space", "宇宙")
	 ("mountain", "山道")
	 ("rockbed", "岩場")
	 ("wasteland", "廃墟")
	 ("ghost-town", "旧市街")
	 ("forest1", "森１")
	 ("forest2", "森２")
	 ("bridge", "橋")
	 ("swamp", "毒沼")
	 ("building", "洋館")
	 ("ocean", "海")
	 ("castle", "玉座")
	 ("strange", "異空間")
	 ("beach", "砂浜")
	 ("desert", "砂漠")
	 ("ruins1", "神殿")
	 ("sky", "空")
	 ("shipdeck", "船上")
	 ("plains", "草原")
	 ("barren", "荒地")
	 ("town", "街中")
	 ("road", "路上")
	 ("ruins2", "遺跡")
	 ("bath", "銭湯")
	 ("arena", "闘技場")
	 ("snowfield", "雪原")
	 .to_container(sub_map))

	("battle", list_of<sub_map_pair>
	 ("misc1", "2003その他1")
	 ("misc2", "2003その他2")
	 ("barrier1", "2003バリア")
	 ("breath1", "2003ブレス")
	 ("lightray", "2003光柱")
	 ("ice1", "2003冷気")
	 ("sword1", "2003剣")
	 ("absorb1", "2003吸収")
	 ("healing1", "2003回復")
	 ("earth1", "2003大地")
	 ("bow1", "2003弓")
	 ("strike", "2003打撃")
	 ("axe1", "2003斧")
	 ("dark1", "2003暗黒")
	 ("spear1", "2003槍")
	 ("water1", "2003水")
	 ("cure1", "2003治療")
	 ("fire1", "2003炎")
	 ("explode1", "2003爆発")
	 ("claw1", "2003爪")
	 ("holy1", "2003神聖")
	 ("revive1", "2003蘇生")
	 ("bolt1", "2003雷")
	 ("whip1", "2003鞭")
	 ("wind1", "2003風")
	 ("paralyze1", "2003麻痺")
	 ("misc3", "その他")
	 ("barrier2", "バリア")
	 ("breath2", "ブレス")
	 ("increase", "上昇")
	 ("decrease", "下降")
	 ("ice2", "冷気")
	 ("sword2", "剣1")
	 ("sword3", "剣2")
	 ("absorb2", "吸収")
	 ("healing2", "回復")
	 ("earth2", "大地")
	 ("attack", "打撃")
	 ("axe2", "斧")
	 ("dark2", "暗黒")
	 ("spear2", "槍")
	 ("water2", "水")
	 ("cure2", "治療")
	 ("fire2", "炎1")
	 ("fire3", "炎2")
	 ("explode2", "爆発")
	 ("claw2", "爪")
	 ("bow2", "矢")
	 ("holy2", "神聖")
	 ("revive2", "蘇生")
	 ("bolt2", "雷")
	 ("whip2", "鞭")
	 ("wind2", "風")
	 ("paralyze2", "麻痺")
	 .to_container(sub_map))

	("battlechar", list_of<sub_map_pair>
	 ("elf-f-1", "エルフ女a")
	 ("elf-f-2", "エルフ女b")
	 ("elf-m-1", "エルフ男a")
	 ("elf-m-2", "エルフ男b")
	 ("chinese-f-1", "中華女a")
	 ("chinese-f-2", "中華女b")
	 ("chinese-m-1", "中華男a")
	 ("chinese-m-2", "中華男b")
	 ("samurai1", "侍a")
	 ("samurai2", "侍b")
	 ("priestess1", "僧侶女a")
	 ("priestess1", "僧侶女b")
	 ("priest1", "僧侶男a")
	 ("priest2", "僧侶男b")
	 ("hero-f-1", "勇者女a")
	 ("hero-f-2", "勇者女b")
	 ("hero-m-1", "勇者男a")
	 ("hero-m-2", "勇者男b")
	 ("woman1-1", "女性１a")
	 ("woman1-2", "女性１b")
	 ("woman2-1", "女性２a")
	 ("woman2-2", "女性２b")
	 ("woman3-1", "女性３a")
	 ("woman3-2", "女性３b")
	 ("woman4-1", "女性４a")
	 ("woman4-2", "女性４b")
	 ("woman5-1", "女性５a")
	 ("woman5-2", "女性５b")
	 ("ninja-f-1", "忍者女a")
	 ("ninja-f-1", "忍者女b")
	 ("ninja-m-1", "忍者男a")
	 ("ninja-m-2", "忍者男b")
	 ("soldier-f-1", "戦士女a")
	 ("soldier-f-2", "戦士女b")
	 ("soldier-m-1", "戦士男a")
	 ("soldier-m-2", "戦士男b")
	 ("monk-f-1", "格闘家女a")
	 ("monk-f-2", "格闘家女b")
	 ("monk-m-1", "格闘家男a")
	 ("monk-m-2", "格闘家男b")
	 ("pirate-f-1", "海賊女a")
	 ("pirate-f-2", "海賊女b")
	 ("pirate-m-1", "海賊男a")
	 ("pirate-m-2", "海賊男b")
	 ("man1-1", "男性１a")
	 ("man1-2", "男性１b")
	 ("man2-1", "男性２a")
	 ("man2-2", "男性２b")
	 ("man3-1", "男性３a")
	 ("man3-2", "男性３b")
	 ("man4-1", "男性４a")
	 ("man4-2", "男性４b")
	 ("man5-1", "男性５a")
	 ("man5-2", "男性５b")
	 ("thief-f-1", "盗賊女a")
	 ("thief-f-2", "盗賊女b")
	 ("thief-m-1", "盗賊男a")
	 ("thief-m-2", "盗賊男b")
	 ("armor1", "鎧武者a")
	 ("armor2", "鎧武者b")
	 ("mage-f-1", "魔術師女a")
	 ("mage-f-2", "魔術師女b")
	 ("mage-m-1", "魔術師男a")
	 ("mage-m-2", "魔術師男b")
	 .to_container(sub_map))

	("battleweapon", list_of<sub_map_pair>
	 ("weapons", "武器")
	 .to_container(sub_map))

	("charset", list_of<sub_map_pair>
	 ("monster1", "オブジェクト1")
	 ("monster2", "オブジェクト2")
	 ("object1", "モンスター1")
	 ("object2", "モンスター2")
	 ("char1", "一般1")
	 ("char2", "一般2")
	 ("char3", "一般3")
	 ("char4", "一般4")
	 ("char5", "一般5")
	 ("hero1", "主人公1")
	 ("hero2", "主人公2")
	 ("hero3", "主人公3")
	 ("hero4", "主人公4")
	 ("vehicle", "乗り物")
	 ("animal", "動物")
	 .to_container(sub_map))

	("chipset", list_of<sub_map_pair>
	 ("dungeon", "ダンジョン")
	 ("building", "内装")
	 ("main", "基本")
	 ("town", "外観")
	 ("ship", "船")
	 .to_container(sub_map))

	("faceset", list_of<sub_map_pair>
	 ("monster", "モンスター")
	 ("faces1", "一般1")
	 ("faces2", "一般2")
	 ("hero1", "主人公1")
	 ("hero2", "主人公2")
	 .to_container(sub_map))

	("gameover", list_of<sub_map_pair>
	 ("gameover", "ゲームオーバー")
	 .to_container(sub_map))

	("monster", list_of<sub_map_pair>
	 ("ariman", "アーリマン")
	 ("asura", "アスラ")
	 ("anaconda", "アナコンダ")
	 ("alligator", "アリゲーター")
	 ("u-knight", "アンデッドナイト")
	 ("efreet", "イフリート")
	 ("imp", "インプ")
	 ("vampire", "ヴァンパイア")
	 ("oroboros", "ウロボロス")
	 ("elf", "エルフ")
	 ("ogre", "オーガ")
	 ("orc", "オーク")
	 ("odin", "オーディン")
	 ("octopus", "オクトパス")
	 ("gargoyle", "ガーゴイル")
	 ("carbuncle", "カーバンクル")
	 ("cojurer", "カーミラ")
	 ("kappa", "カッパ")
	 ("catoblepas", "カトブレパス")
	 ("garuda", "ガルーダ")
	 ("chimera", "キメラ")
	 ("ghoul", "グール")
	 ("kraken", "クラーケン")
	 ("cancer", "クラブ")
	 ("griffon", "グリフォン")
	 ("grell", "グレル")
	 ("crawler", "クロウラー")
	 ("deathgaze", "ゲイザー")
	 ("quezal", "ケツアルクアトル")
	 ("caitsith", "ケットシー")
	 ("cerberus", "ケルベロス")
	 ("centaur", "ケンタウロス")
	 ("gorgon", "ゴーゴン")
	 ("ghost", "ゴースト")
	 ("golem", "ゴーレム")
	 ("cockatrice", "コカトリス")
	 ("goblin", "ゴブリン")
	 ("kobold", "コボルト")
	 ("cyclops", "サイクロプス")
	 ("satan", "サタナエル")
	 ("sahagin", "サハギン")
	 ("salamander", "サラマンダー")
	 ("shark", "シャーク")
	 ("giant", "ジャイアント")
	 ("jack", "ジャック・オー・ランタン")
	 ("shadow", "シャドウ")
	 ("sylph", "シルフ")
	 ("scylla", "スキュラ")
	 ("skeleton", "スケルトン")
	 ("scorpion", "スコーピオン")
	 ("snake", "スネーク")
	 ("spirit", "スピリッツ")
	 ("sphinx", "スフィンクス")
	 ("specter", "スペクター")
	 ("slime", "スライム")
	 ("siren", "セイレーン")
	 ("seraph", "セラフィム")
	 ("centipede", "センチピード")
	 ("sorcerer", "ソーサラー")
	 ("zombie", "ゾンビ")
	 ("darkelf", "ダークエルフ")
	 ("darkknight", "ダークナイト")
	 ("titan", "タイタン")
	 ("spider", "タランチュラ")
	 ("tiamat", "ティアマット")
	 ("demon", "デーモン")
	 ("toad", "トード")
	 ("dragon", "ドラゴン")
	 ("dragonknight", "ドラゴンナイト")
	 ("treant", "トレント")
	 ("troll", "トロール")
	 ("necromancer", "ネクロマンサー")
	 ("nepenthe", "ネペンテス")
	 ("berserker", "バーサーカー")
	 ("harpy", "ハーピー")
	 ("basilisk", "バジリスク")
	 ("bat", "バット")
	 ("bahamut", "バハムート")
	 ("parasite", "パラサイト")
	 ("bigfoot", "ビッグフット")
	 ("hydra", "ヒュドラ")
	 ("phoenix", "フェニックス")
	 ("fenrir", "フェンリル")
	 ("behemoth", "ベヒーモス")
	 ("hornet", "ホーネット")
	 ("manticore", "マンティコア")
	 ("mantis", "マンティス")
	 ("mammoth", "マンモス")
	 ("mummy", "ミイラ男")
	 ("midgard-serp", "ミドガルズオルム")
	 ("minotaur", "ミノタウロス")
	 ("mimic", "ミミック")
	 ("medusa", "メデューサ")
	 ("unicorn", "ユニコーン")
	 ("rakashimi", "ラクシュミ")
	 ("lamia", "ラミア")
	 ("leviathan", "リヴァイアサン")
	 ("lizard", "リザード")
	 ("lizardman", "リザードマン")
	 ("lich", "リッチ")
	 ("lilith", "リリス")
	 ("wraith", "レイス")
	 ("remora", "レモラ")
	 ("werewolf", "ワーウルフ")
	 ("worm", "ワーム")
	 ("wight", "ワイト")
	 ("wyvern", "ワイバーン")
	 ("ninetail", "九尾の狐")
	 ("redsparrow", "朱雀")
	 ("blackturtle", "玄武")
	 ("whitetiger", "白虎")
	 ("nightmare", "馬")
	 ("oni", "鬼")
	 ("ki-rin", "麒麟")
	 ("bluedragon", "龍")
	 .to_container(sub_map))

	("music", list_of<sub_map_pair>
	 ("spring", "2003いやしの泉")
	 ("casino", "2003カジノ三昧")
	 ("arena", "2003コロシアム")
	 ("bustling-city", "2003サイバーシティ")
	 ("snowtown", "2003スノータウン")
	 ("panic", "2003パニック")
	 ("fierce-battle", "2003マキシマム・バトル")
	 ("jackpot", "2003一獲千金の夢")
	 ("adventure", "2003冒険者たち")
	 ("triumph", "2003勇者の凱旋")
	 ("ancient-castle", "2003古城")
	 ("labyrinth", "2003地下迷宮")
	 ("forest", "2003夢幻の森")
	 ("moonlight", "2003夢見心地")
	 ("armyclash", "2003大混戦")
	 ("airborne", "2003大空への翼")
	 ("hallowed-halls", "2003大聖堂")
	 ("fairies", "2003妖精の森")
	 ("lonewolf", "2003孤独な旅立ち")
	 ("march", "2003小さな兵隊のマーチ")
	 ("mtn-village", "2003山あいの村")
	 ("empire", "2003帝国〜エンパイア")
	 ("memories", "2003幼少の記憶")
	 ("foreboding", "2003忍び寄る闇")
	 ("eternal", "2003悠久の時の流れに")
	 ("sadness", "2003悲しみ")
	 ("intro", "2003戦いの幕開け")
	 ("church1", "2003教会")
	 ("village4", "2003日だまりの村")
	 ("evil-temple", "2003暗黒の祭壇")
	 ("strangetown", "2003未開の集落")
	 ("far-east", "2003極東の地")
	 ("mecha-base", "2003機械要塞")
	 ("icecave", "2003氷のラビリンス")
	 ("showdown", "2003決戦の地")
	 ("haunted", "2003無人の館")
	 ("royal-ball", "2003王宮のパーティー")
	 ("dimension", "2003異次元回廊")
	 ("waltz", "2003祝福ワルツ")
	 ("interlude", "2003穏やかな風")
	 ("tension", "2003緊迫")
	 ("endless-fight", "2003繰り返される戦い")
	 ("town-square", "2003街の賑わい")
	 ("bar", "2003街の酒場")
	 ("memories2", "2003記憶の彼方に")
	 ("ruins", "2003遺跡探索")
	 ("godslayer", "2003邪神との戦い")
	 ("calm", "2003静寂")
	 ("horns", "j2003ホルン")
	 ("item", "jアイテム")
	 ("mischief1", "jギャグ1")
	 ("mischief2", "jギャグ2")
	 ("fanfare1", "jファンファーレ1")
	 ("fanfare2", "jファンファーレ2")
	 ("fanfare3", "jファンファーレ3")
	 ("fanfare4", "jファンファーレ4")
	 ("fanfare5", "jファンファーレ5")
	 ("fanfare6", "jファンファーレ6")
	 ("inn1", "j宿1")
	 ("inn2", "j宿2")
	 ("victory1", "j戦闘終了1")
	 ("victory2", "j戦闘終了2")
	 ("victory3", "j戦闘終了3")
	 ("victory4", "j戦闘終了4")
	 ("surprise", "j疑惑")
	 ("riddle", "j謎")
	 ("se-alarm", "se2003アラーム")
	 ("se-jungle", "se2003ジャングル")
	 ("se-crowd", "se2003雑踏")
	 ("se-gale", "se2003風")
	 ("se-bird", "se2003鳥")
	 ("se-quake", "se地震")
	 ("se-torrent", "se大雨")
	 ("se-clock", "se時計")
	 ("se-ocean", "se海")
	 ("se-rain", "se雨")
	 ("ending1", "エンディング1")
	 ("ending2", "エンディング2")
	 ("ending3", "エンディング3")
	 ("opening1", "オープニング1")
	 ("opening2", "オープニング2")
	 ("opening3", "オープニング3")
	 ("gameover1", "ゲームオーバー1")
	 ("gameover2", "ゲームオーバー2")
	 ("gameover3", "ゲームオーバー3")
	 ("ghost-town1", "ゴーストタウン1")
	 ("ghost-town2", "ゴーストタウン2")
	 ("dungeon1", "ダンジョン1")
	 ("dungeon2", "ダンジョン2")
	 ("dungeon3", "ダンジョン3")
	 ("dungeon4", "ダンジョン4")
	 ("dungeon5", "ダンジョン5")
	 ("tightspot", "ピンチ")
	 ("field1", "フィールド1")
	 ("field2", "フィールド2")
	 ("field3", "フィールド3")
	 ("field4", "フィールド4")
	 ("boss1", "ボス1")
	 ("boss2", "ボス2")
	 ("boss3", "ボス3")
	 ("boss4", "ボス4")
	 ("vehicle1", "乗り物1")
	 ("vehicle2", "乗り物2")
	 ("vehicle3", "乗り物3")
	 ("parting1", "別れ1")
	 ("parting2", "別れ2")
	 ("hero1", "勇者1")
	 ("hero2", "勇者2")
	 ("animal", "動物")
	 ("success", "勝利")
	 ("castle1", "城1")
	 ("castle2", "城2")
	 ("castle3", "城3")
	 ("tower1", "塔1")
	 ("tower2", "塔2")
	 ("tower3", "塔3")
	 ("fairy1", "妖精1")
	 ("fairy2", "妖精2")
	 ("solace1", "安らぎ1")
	 ("solace2", "安らぎ2")
	 ("solace3", "安らぎ3")
	 ("shop1", "店1")
	 ("shop2", "店2")
	 ("shop3", "店3")
	 ("malice", "怒り")
	 ("sad", "悲しみ")
	 ("battle1", "戦闘1")
	 ("battle2", "戦闘2")
	 ("battle3", "戦闘3")
	 ("explore", "探索")
	 ("defeat", "敗北")
	 ("church2", "教会")
	 ("bazaar", "明るい市場")
	 ("village1", "村1")
	 ("village2", "村2")
	 ("village3", "村3")
	 ("thief", "泥棒")
	 ("strength", "活気")
	 ("town1", "町1")
	 ("town2", "町2")
	 ("town3", "町3")
	 ("mystery1", "神秘1")
	 ("mystery2", "神秘2")
	 ("mystery3", "神秘3")
	 ("treasure", "秘宝")
	 ("boat1", "船1")
	 ("boat2", "船2")
	 ("boat3", "船3")
	 ("ordeal", "試練")
	 ("eviltown", "闇市")
	 ("demonic", "魔王")
	 .to_container(sub_map))

	("panorama", list_of<sub_map_pair>
	 ("dusk1", "夕焼け1")
	 ("dusk2", "夕焼け2")
	 ("dawn1", "夜明け1")
	 ("dawn2", "夜明け2")
	 ("night1", "夜空1")
	 ("night2", "夜空2")
	 ("space", "宇宙")
	 ("planet1", "惑星1")
	 ("planet2", "惑星2")
	 ("planet3", "惑星3")
	 ("strange", "異空間")
	 ("sky1", "空1")
	 ("sky2", "空2")
	 .to_container(sub_map))

	("sound", list_of<sub_map_pair>
	 ("item1", "アイテム1")
	 ("item2", "アイテム2")
	 ("jingle1", "あたり1")
	 ("jingle2", "あたり2")
	 ("increase", "アップ")
	 ("dog", "イヌ")
	 ("cow", "ウシ")
	 ("horse", "ウマ")
	 ("roar", "おたけび")
	 ("cursor1", "カーソル1")
	 ("cursor2", "カーソル2")
	 ("shatter", "ガシャン")
	 ("cancel1", "キャンセル1")
	 ("cancel2", "キャンセル2")
	 ("paralyze1", "しびれ1")
	 ("paralyze2", "しびれ2")
	 ("paralyze3", "しびれ3")
	 ("jump1", "ジャンプ1")
	 ("jump2", "ジャンプ2")
	 ("shot1", "ショット1")
	 ("shot2", "ショット2")
	 ("shot3", "ショット3")
	 ("switch1", "スイッチ1")
	 ("switch2", "スイッチ2")
	 ("decrease", "ダウン")
	 ("damage1", "ダメージ1")
	 ("damage2", "ダメージ2")
	 ("teleport1", "テレポート1")
	 ("teleport2", "テレポート2")
	 ("tiger", "トラ")
	 ("gaze", "にらみ")
	 ("chicken", "にわとり")
	 ("cat", "ネコ")
	 ("knock", "ノック")
	 ("failure1", "はずれ1")
	 ("failure2", "はずれ2")
	 ("barrier", "バリア")
	 ("sheep", "ひつじ")
	 ("buzzer1", "ブザー1")
	 ("buzzer2", "ブザー2")
	 ("flash1", "フラッシュ1")
	 ("flash2", "フラッシュ2")
	 ("flash3", "フラッシュ3")
	 ("breath", "ブレス")
	 ("monster1", "モンスター1")
	 ("monster2", "モンスター2")
	 ("lion", "ライオン")
	 ("ice01", "冷気1")
	 ("ice04", "冷気2")
	 ("ice05", "冷気3")
	 ("ice06", "冷気4")
	 ("ice07", "冷気5")
	 ("ice08", "冷気6")
	 ("ice09", "冷気7")
	 ("ice10", "冷気8")
	 ("ice11", "冷気9")
	 ("ice02", "冷気10")
	 ("ice03", "冷気11")
	 ("sword1", "剣1")
	 ("sword2", "剣2")
	 ("sword3", "剣3")
	 ("absorb1", "吸収1")
	 ("absorb2", "吸収2")
	 ("bloodsuck", "噛む")
	 ("heal1", "回復1")
	 ("heal2", "回復2")
	 ("heal3", "回復3")
	 ("heal4", "回復4")
	 ("heal5", "回復5")
	 ("heal6", "回復6")
	 ("heal7", "回復7")
	 ("heal8", "回復8")
	 ("evade1", "回避1")
	 ("evade2", "回避2")
	 ("quake1", "地震1")
	 ("quake2", "地震2")
	 ("bump1", "壁1")
	 ("bump2", "壁2")
	 ("earth01", "大地1")
	 ("earth02", "大地2")
	 ("earth03", "大地3")
	 ("earth04", "大地4")
	 ("earth05", "大地5")
	 ("earth06", "大地6")
	 ("earth07", "大地7")
	 ("earth08", "大地8")
	 ("earth09", "大地9")
	 ("earth10", "大地10")
	 ("ensnare", "巻き付き")
	 ("bow1", "弓1")
	 ("bow2", "弓2")
	 ("battle1", "戦闘1")
	 ("battle2", "戦闘2")
	 ("punch1", "打撃1")
	 ("punch2", "打撃2")
	 ("punch3", "打撃3")
	 ("punch4", "打撃4")
	 ("punch5", "打撃5")
	 ("punch6", "打撃6")
	 ("punch7", "打撃7")
	 ("attack1", "攻撃1")
	 ("attack2", "攻撃2")
	 ("strike01", "斬る1")
	 ("strike10", "斬る10")
	 ("strike11", "斬る11")
	 ("strike02", "斬る2")
	 ("strike03", "斬る3")
	 ("strike04", "斬る4")
	 ("strike05", "斬る5")
	 ("strike06", "斬る6")
	 ("strike07", "斬る7")
	 ("strike08", "斬る8")
	 ("strike09", "斬る9")
	 ("clock", "時計")
	 ("night", "暗闇")
	 ("dark1", "暗黒1")
	 ("dark2", "暗黒2")
	 ("dark3", "暗黒3")
	 ("dark4", "暗黒4")
	 ("dark5", "暗黒5")
	 ("dark6", "暗黒6")
	 ("song", "歌")
	 ("poison", "毒")
	 ("water1", "水1")
	 ("water2", "水2")
	 ("water3", "水3")
	 ("water4", "水4")
	 ("water5", "水5")
	 ("water6", "水6")
	 ("choice1", "決定1")
	 ("choice2", "決定2")
	 ("silence", "沈黙")
	 ("sea1", "海1")
	 ("sea2", "海2")
	 ("vanish1", "消滅1")
	 ("vanish2", "消滅2")
	 ("confuse", "混乱")
	 ("fire1", "炎1")
	 ("fire2", "炎2")
	 ("fire3", "炎3")
	 ("fire4", "炎4")
	 ("fire5", "炎5")
	 ("fire6", "炎6")
	 ("fire7", "炎7")
	 ("fire8", "炎8")
	 ("explode1", "爆発1")
	 ("explode2", "爆発2")
	 ("explode3", "爆発3")
	 ("explode4", "爆発4")
	 ("explode5", "爆発5")
	 ("explode6", "爆発6")
	 ("explode7", "爆発7")
	 ("sleep", "睡眠")
	 ("sandstorm", "砂けむり")
	 ("holy1", "神聖1")
	 ("holy2", "神聖2")
	 ("holy3", "神聖3")
	 ("holy4", "神聖4")
	 ("holy5", "神聖5")
	 ("holy6", "神聖6")
	 ("holy7", "神聖7")
	 ("holy8", "神聖8")
	 ("holy9", "神聖9")
	 ("footstep", "移動")
	 ("pollen", "花粉")
	 ("fall1", "落ちる1")
	 ("fall2", "落ちる2")
	 ("revive1", "蘇生1")
	 ("revive2", "蘇生2")
	 ("revive3", "蘇生3")
	 ("flee", "逃走")
	 ("key", "鍵")
	 ("gong", "鐘")
	 ("close1", "閉める1")
	 ("close2", "閉める2")
	 ("open1", "開ける1")
	 ("open2", "開ける2")
	 ("rain01", "雨1")
	 ("rain02", "雨2")
	 ("bolt01", "雷1")
	 ("bolt02", "雷2")
	 ("bolt03", "雷3")
	 ("bolt04", "雷4")
	 ("bolt05", "雷5")
	 ("bolt06", "雷6")
	 ("bolt07", "雷7")
	 ("bolt08", "雷8")
	 ("bolt09", "雷9")
	 ("bolt10", "雷10")
	 ("fog1", "霧1")
	 ("fog2", "霧2")
	 ("wave1", "音波1")
	 ("wave2", "音波2")
	 ("wind01", "風1")
	 ("wind02", "風2")
	 ("wind03", "風3")
	 ("wind04", "風4")
	 ("wind05", "風5")
	 ("wind06", "風6")
	 ("wind07", "風7")
	 ("wind08", "風8")
	 ("wind09", "風9")
	 ("wind10", "風10")
	 ("wind11", "風11")
	 ("magic1", "魔法1")
	 ("magic2", "魔法2")
	 .to_container(sub_map))

	("system", list_of<sub_map_pair>
	 ("system1", "システム")
	 ("system2", "システムa")
	 ("system3", "システムb")
	 ("system4", "システムc")
	 .to_container(sub_map))

	("system2", list_of<sub_map_pair>
	 ("system2a", "システム２a")
	 ("system2b", "システム２b")
	 ("system2c", "システム２c")
	 .to_container(sub_map))

	("title", list_of<sub_map_pair>
	 ("title1", "タイトル1")
	 ("title2", "タイトル2")
	 ("title3", "タイトル3")
	 ("title4", "タイトル4")
	 .to_container(sub_map))
	;

rtp_table_type const RTP_TABLE_2000 = map_list_of
	("backdrop", list_of<sub_map_pair>
	 ("cave1", "ダンジョン1")
	 ("lavacave2", "ダンジョン2")
	 ("icecave3", "ダンジョン3")
	 ("cave4", "ダンジョン4")
	 ("brickcave5", "ダンジョン5")
	 ("galaxy", "宇宙")
	 ("canyon", "山道")
	 ("snowcanyon", "岩場")
	 ("wasteruins", "廃墟")
	 ("forest1", "森1")
	 ("forest2", "森2")
	 ("bridge", "橋")
	 ("swamp", "毒沼")
	 ("sea", "海")
	 ("castle", "玉座")
	 ("lightspeed", "異空間")
	 ("seabeach", "砂浜")
	 ("desert", "砂漠")
	 ("greece", "神殿")
	 ("sky", "空")
	 ("ship", "船上")
	 ("grass", "草原")
	 ("wasteland", "荒地")
	 ("town", "街中")
	 ("snow", "雪原")
	 .to_container(sub_map))

	("battle", list_of<sub_map_pair>
	 ("etc", "その他")
	 ("barrier", "バリア")
	 ("poison", "ブレス")
	 ("up", "上昇")
	 ("down", "下降")
	 ("cold", "冷気")
	 ("sword1", "剣1")
	 ("sword2", "剣2")
	 ("absorption", "吸収")
	 ("sun", "回復")
	 ("earth", "大地")
	 ("hit", "打撃")
	 ("axe", "斧")
	 ("dark", "暗黒")
	 ("spear", "槍")
	 ("water", "水")
	 ("sphere", "治療")
	 ("fire1", "炎1")
	 ("fire2", "炎2")
	 ("explosion", "爆発")
	 ("fang", "爪")
	 ("arrow", "矢")
	 ("holy", "神聖")
	 ("ray", "蘇生")
	 ("zip", "雷")
	 ("whip", "鞭")
	 ("wind", "風")
	 ("paralysis", "麻痺")
	 .to_container(sub_map))

	("charset", list_of<sub_map_pair>
	 ("etc", "その他")
	 ("barrier", "バリア")
	 ("poison", "ブレス")
	 ("up", "上昇")
	 ("down", "下降")
	 ("cold", "冷気")
	 ("sword1", "剣1")
	 ("sword2", "剣2")
	 ("absorption", "吸収")
	 ("sun", "回復")
	 ("earth", "大地")
	 ("hit", "打撃")
	 ("axe", "斧")
	 ("dark", "暗黒")
	 ("spear", "槍")
	 ("water", "水")
	 ("sphere", "治療")
	 ("fire1", "炎1")
	 ("fire2", "炎2")
	 ("explosion", "爆発")
	 ("fang", "爪")
	 ("arrow", "矢")
	 ("holy", "神聖")
	 ("ray", "蘇生")
	 ("zip", "雷")
	 ("whip", "鞭")
	 ("wind", "風")
	 ("paralysis", "麻痺")
	 .to_container(sub_map))

	("chipset", list_of<sub_map_pair>
	 ("dungeon", "ダンジョン")
	 ("inner", "内装")
	 ("basis", "基本")
	 ("outline", "外観")
	 ("ship", "船")
	 .to_container(sub_map))

	("faceset", list_of<sub_map_pair>
	 ("monsters", "モンスター")
	 ("people1", "一般1")
	 ("people2", "一般2")
	 ("chara1", "主人公1")
	 ("chara2", "主人公2")
	 .to_container(sub_map))

	("gameover", list_of<sub_map_pair>
	 ("gameover", "ゲームオーバー")
	 .to_container(sub_map))

	("monster", list_of<sub_map_pair>
	 ("vampire", "ヴァンパイア")
	 ("hog", "オーク")
	 ("gargoyle", "ガーゴイル")
	 ("chimera", "キマイラ")
	 ("octopus", "クラーケン")
	 ("griphon", "グリフォン")
	 ("hellhound", "ケルベロス")
	 ("bat", "こうもり")
	 ("ghost", "ゴースト")
	 ("golem", "ゴーレム")
	 ("rooster", "コカトリス")
	 ("troll", "ゴブリン")
	 ("wolfman", "コボルト")
	 ("skeleton", "スケルトン")
	 ("slime", "スライム")
	 ("zombie", "ゾンビ")
	 ("darkelf", "ダークエルフ")
	 ("flyingdemon", "デーモン")
	 ("greendragon1", "ドラゴン")
	 ("dragonknight", "ドラゴンナイト")
	 ("darkrider", "トルーパー")
	 ("oak", "トレント")
	 ("harpy", "ハーピー")
	 ("hydra", "ヒュドラ")
	 ("darkknight", "ブラックナイト")
	 ("bee", "ホーネット")
	 ("aquamen", "マーマン")
	 ("mummy", "マミー")
	 ("minotaur", "ミノタウロス")
	 ("ogrechest", "ミミック")
	 ("medusa", "メデューサ")
	 ("lizardmen", "リザードマン")
	 ("darkspirit", "リッチ")
	 ("wolf", "ワーウルフ")
	 ("bluedragon", "ワイバーン")
	 ("boy1", "一般人1")
	 ("girl2", "一般人2")
	 ("boy3", "一般人3")
	 ("girl4", "一般人4")
	 ("man5", "一般人5")
	 ("girl6", "一般人6")
	 ("oldman7", "一般人7")
	 ("granny", "一般人8")
	 ("imp", "使い魔")
	 ("warrior", "兵士")
	 ("spider", "大グモ")
	 ("redscorpion", "大サソリ")
	 ("snake", "大蛇")
	 ("angel", "天使")
	 ("princess", "女王")
	 ("ninja", "忍者")
	 ("fish", "怪魚")
	 ("hero1", "戦士1")
	 ("hero2", "戦士2")
	 ("samurai", "武者")
	 ("death", "死神")
	 ("gnome", "海賊")
	 ("king", "王")
	 ("thief", "盗賊")
	 ("firescull", "鬼火")
	 ("cloakdemon", "魔王")
	 ("satan", "魔神")
	 ("witch1", "魔術師1")
	 ("witch2", "魔術師2")
	 ("greendragon2", "龍")
	 .to_container(sub_map))

	("music", list_of<sub_map_pair>
	 ("item", "jアイテム")
	 ("gag1", "jギャグ1")
	 ("gag2", "jギャグ2")
	 ("fanfare1", "jファンファーレ1")
	 ("fanfare2", "jファンファーレ2")
	 ("fanfare3", "jファンファーレ3")
	 ("fanfare4", "jファンファーレ4")
	 ("fanfare5", "jファンファーレ5")
	 ("fanfare6", "jファンファーレ6")
	 ("inn1", "j宿1")
	 ("inn2", "j宿2")
	 ("battleend1", "j戦闘終了1")
	 ("battleend2", "j戦闘終了2")
	 ("battleend3", "j戦闘終了3")
	 ("battleend4", "j戦闘終了4")
	 ("doubt", "j疑惑")
	 ("riddle", "j謎")
	 ("seearthquake", "se地震")
	 ("serain2", "se大雨")
	 ("seclock", "se時計")
	 ("sesea", "se海")
	 ("serain", "se雨")
	 ("ending1", "エンディング1")
	 ("ending2", "エンディング2")
	 ("ending3", "エンディング3")
	 ("opening1", "オープニング1")
	 ("opening2", "オープニング2")
	 ("opening3", "オープニング3")
	 ("gameover1", "ゲームオーバー1")
	 ("gameover2", "ゲームオーバー2")
	 ("gameover3", "ゲームオーバー3")
	 ("gosttown1", "ゴーストタウン1")
	 ("gosttown2", "ゴーストタウン2")
	 ("dungeon1", "ダンジョン1")
	 ("dungeon2", "ダンジョン2")
	 ("dungeon3", "ダンジョン3")
	 ("dungeon4", "ダンジョン4")
	 ("dungeon5", "ダンジョン5")
	 ("crisis", "ピンチ")
	 ("field1", "フィールド1")
	 ("field2", "フィールド2")
	 ("field3", "フィールド3")
	 ("field4", "フィールド4")
	 ("boss1", "ボス1")
	 ("boss2", "ボス2")
	 ("boss3", "ボス3")
	 ("boss4", "ボス4")
	 ("ride1", "乗り物1")
	 ("ride2", "乗り物2")
	 ("ride3", "乗り物3")
	 ("farewell1", "別れ1")
	 ("farewell2", "別れ2")
	 ("hero1", "勇者1")
	 ("hero2", "勇者2")
	 ("animal", "動物")
	 ("get", "勝利")
	 ("castle1", "城1")
	 ("castle2", "城2")
	 ("castle3", "城3")
	 ("tower1", "塔1")
	 ("tower2", "塔2")
	 ("tower3", "塔3")
	 ("fairy1", "妖精1")
	 ("fairy2", "妖精2")
	 ("peace1", "安らぎ1")
	 ("peace2", "安らぎ2")
	 ("peace3", "安らぎ3")
	 ("shop1", "店1")
	 ("shop2", "店2")
	 ("shop3", "店3")
	 ("anger", "怒り")
	 ("sad", "悲しみ")
	 ("battle1", "戦闘1")
	 ("battle2", "戦闘2")
	 ("battle3", "戦闘3")
	 ("search", "探索")
	 ("lose", "敗北")
	 ("church", "教会")
	 ("fiesta", "明るい市場")
	 ("village1", "村1")
	 ("village2", "村2")
	 ("village3", "村3")
	 ("thief", "泥棒")
	 ("energy", "活気")
	 ("town1", "町1")
	 ("town2", "町2")
	 ("town3", "町3")
	 ("mystery1", "神秘1")
	 ("mystery2", "神秘2")
	 ("mystery3", "神秘3")
	 ("treasure", "秘宝")
	 ("ship1", "船1")
	 ("ship2", "船2")
	 ("ship3", "船3")
	 ("trial", "試練")
	 ("dark", "闇市")
	 ("devil", "魔王")
	 .to_container(sub_map))

	("panorama", list_of<sub_map_pair>
	 ("dawn1", "夕焼け1")
	 ("dawn2", "夕焼け2")
	 ("evening1", "夜明け1")
	 ("evening2", "夜明け2")
	 ("night1", "夜空1")
	 ("night2", "夜空2")
	 ("galaxy", "宇宙")
	 ("planet1", "惑星1")
	 ("planet2", "惑星2")
	 ("planet3", "惑星3")
	 ("weird", "異空間")
	 ("morning1", "空1")
	 ("morning2", "空2")
	 .to_container(sub_map))

	("sound", list_of<sub_map_pair>
	 ("item1", "アイテム1")
	 ("item2", "アイテム2")
	 ("success1", "あたり1")
	 ("success2", "あたり2")
	 ("up", "アップ")
	 ("dog", "イヌ")
	 ("cow", "ウシ")
	 ("horse", "ウマ")
	 ("roar", "おたけび")
	 ("cursor1", "カーソル1")
	 ("cursor2", "カーソル2")
	 ("glass", "ガシャン")
	 ("cansel1", "キャンセル1")
	 ("cansel2", "キャンセル2")
	 ("numbness1", "しびれ1")
	 ("numbness2", "しびれ2")
	 ("numbness3", "しびれ3")
	 ("jump1", "ジャンプ1")
	 ("jump2", "ジャンプ2")
	 ("shot1", "ショット1")
	 ("shot2", "ショット2")
	 ("shot3", "ショット3")
	 ("switch1", "スイッチ1")
	 ("switch2", "スイッチ2")
	 ("down", "ダウン")
	 ("damage1", "ダメージ1")
	 ("damage2", "ダメージ2")
	 ("teleport1", "テレポート1")
	 ("teleport2", "テレポート2")
	 ("tiger", "トラ")
	 ("power", "にらみ")
	 ("chicken", "にわとり")
	 ("cat", "ネコ")
	 ("knock", "ノック")
	 ("failure1", "はずれ1")
	 ("failure2", "はずれ2")
	 ("barrier", "バリア")
	 ("sheep", "ひつじ")
	 ("buzzer1", "ブザー1")
	 ("buzzer2", "ブザー2")
	 ("flash1", "フラッシュ1")
	 ("flash2", "フラッシュ2")
	 ("flash3", "フラッシュ3")
	 ("breast", "ブレス")
	 ("monster1", "モンスター1")
	 ("monster2", "モンスター2")
	 ("lion", "ライオン")
	 ("cold1", "冷気1")
	 ("cold2", "冷気2")
	 ("cold3", "冷気3")
	 ("cold4", "冷気4")
	 ("cold5", "冷気5")
	 ("cold6", "冷気6")
	 ("cold7", "冷気7")
	 ("cold8", "冷気8")
	 ("cold9", "冷気9")
	 ("cold10", "冷気10")
	 ("cold11", "冷気11")
	 ("sword1", "剣1")
	 ("sword2", "剣2")
	 ("sword3", "剣3")
	 ("absorption1", "吸収1")
	 ("absorption2", "吸収2")
	 ("bite", "噛む")
	 ("recovery1", "回復1")
	 ("recovery2", "回復2")
	 ("recovery3", "回復3")
	 ("recovery4", "回復4")
	 ("recovery5", "回復5")
	 ("recovery6", "回復6")
	 ("recovery7", "回復7")
	 ("recovery8", "回復8")
	 ("evasion1", "回避1")
	 ("evasion2", "回避2")
	 ("earthquake1", "地震1")
	 ("earthquake2", "地震2")
	 ("FOUND", "壁1NOT")
	 ("FOUND", "壁2NOT")
	 ("earth1", "大地1")
	 ("earth2", "大地2")
	 ("earth3", "大地3")
	 ("earth4", "大地4")
	 ("earth5", "大地5")
	 ("earth6", "大地6")
	 ("earth7", "大地7")
	 ("earth8", "大地8")
	 ("earth9", "大地9")
	 ("earth10", "大地10")
	 ("book", "巻き付き refer")
	 ("bow1", "弓1")
	 ("bow2", "弓2")
	 ("fight1", "戦闘1")
	 ("fight2", "戦闘2")
	 ("blow1", "打撃1")
	 ("blow2", "打撃2")
	 ("blow3", "打撃3")
	 ("blow4", "打撃4")
	 ("blow5", "打撃5")
	 ("blow6", "打撃6")
	 ("blow7", "打撃7")
	 ("attack1", "攻撃1")
	 ("attack2", "攻撃2")
	 ("kill1", "斬る1")
	 ("kill2", "斬る2")
	 ("kill3", "斬る3")
	 ("kill4", "斬る4")
	 ("kill5", "斬る5")
	 ("FOUND", "斬る6NOT")
	 ("kill7", "斬る7")
	 ("kill8", "斬る8")
	 ("kill9", "斬る9")
	 ("kill10", "斬る10")
	 ("kill11", "斬る11")
	 ("clock", "時計")
	 ("darkness", "暗闇")
	 ("dark1", "暗黒1")
	 ("dark2", "暗黒2")
	 ("dark3", "暗黒3")
	 ("dark4", "暗黒4")
	 ("dark5", "暗黒5")
	 ("dark6", "暗黒6")
	 ("song", "歌")
	 ("poison", "毒")
	 ("water1", "水1")
	 ("water2", "水2")
	 ("water3", "水3")
	 ("water4", "水4")
	 ("water5", "水5")
	 ("water6", "水6")
	 ("decision1", "決定1")
	 ("decision2", "決定2")
	 ("silence", "沈黙")
	 ("sea1", "海1")
	 ("sea2", "海2")
	 ("annihilation1", "消滅1")
	 ("annihilation2", "消滅2")
	 ("chaos", "混乱")
	 ("flame1", "炎1")
	 ("flame2", "炎2")
	 ("flame3", "炎3")
	 ("flame4", "炎4")
	 ("flame5", "炎5")
	 ("flame6", "炎6")
	 ("flame7", "炎7")
	 ("flame8", "炎8")
	 ("explosion1", "爆発1")
	 ("explosion2", "爆発2")
	 ("explosion3", "爆発3")
	 ("explosion4", "爆発4")
	 ("explosion5", "爆発5")
	 ("explosion6", "爆発6")
	 ("explosion7", "爆発7")
	 ("sleep", "睡眠")
	 ("storm", "砂けむり sand")
	 ("holy1", "神聖1")
	 ("holy2", "神聖2")
	 ("holy3", "神聖3")
	 ("holy4", "神聖4")
	 ("holy5", "神聖5")
	 ("holy6", "神聖6")
	 ("holy7", "神聖7")
	 ("holy8", "神聖8")
	 ("holy9", "神聖9")
	 ("movement", "移動")
	 ("pollen", "花粉")
	 ("fall1", "落ちる1")
	 ("fall2", "落ちる2")
	 ("rebirth1", "蘇生1")
	 ("rebirth2", "蘇生2")
	 ("rebirth3", "蘇生3")
	 ("escape", "逃走")
	 ("key", "鍵")
	 ("bell", "鐘")
	 ("close1", "閉める1")
	 ("close2", "閉める2")
	 ("open1", "開ける1")
	 ("open2", "開ける2")
	 ("rain1", "雨1")
	 ("rain2", "雨2")
	 ("thunder1", "雷1")
	 ("thunder2", "雷2")
	 ("thunder3", "雷3")
	 ("thunder4", "雷4")
	 ("thunder5", "雷5")
	 ("thunder6", "雷6")
	 ("thunder7", "雷7")
	 ("thunder8", "雷8")
	 ("thunder9", "雷9")
	 ("thunder10", "雷10")
	 ("fog1", "霧1")
	 ("fog2", "霧2")
	 ("sonic1", "音波1")
	 ("sonic2", "音波2")
	 ("wind1", "風1")
	 ("wind2", "風2")
	 ("wind3", "風3")
	 ("wind4", "風4")
	 ("wind5", "風5")
	 ("wind6", "風6")
	 ("wind7", "風7")
	 ("wind8", "風8")
	 ("wind9", "風9")
	 ("wind10", "風10")
	 ("wind11", "風11")
	 ("wall1", "魔法1")
	 ("wall2", "魔法2")
	 .to_container(sub_map))

	("system", list_of<sub_map_pair>
	 ("system", "システム")
	 .to_container(sub_map))

	("title", list_of<sub_map_pair>
	 ("title1", "タイトル1")
	 ("title2", "タイトル2")
	 ("title3", "タイトル3")
	 ("title4", "タイトル4")
	 .to_container(sub_map))
	;

#endif
