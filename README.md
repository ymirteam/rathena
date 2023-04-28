<img src="doc/logo.png" align="right" height="90" />

# rAthena MOD By. nullptr
# 🪙🏧 Donate :coffee: : TTB : 9212483326 🙏🏽🙏🏽
# Dowload Client Game : [Ver.6.2.5 แก้ไขล่าสุดเมื่อ : 27-04-2023](https://shorturl.asia/JLNsS)
| Platform       | Status          |
|----------------|----------------------|
| Windows        | ![ms](https://img.shields.io/github/actions/workflow/status/iberryRO/MiX/build_servers_msbuild.yml?label=ms%20build&logo=visualstudio) |
| Commit | ![commit activity](https://img.shields.io/github/commit-activity/w/iberryRO/MiX) |
| Repo size | ![GitHub repo size](https://img.shields.io/github/repo-size/iberryRO/MiX.svg) |
| License | ![GitHub](https://img.shields.io/github/license/iberryRO/MiX.svg) |

> rAthena is a collaborative software development project revolving around the creation of a robust massively multiplayer online role playing game (MMORPG) server package. Written in C, the program is very versatile and provides NPCs, warps and modifications. The project is jointly managed by a group of volunteers located around the world as well as a tremendous community providing QA and support. rAthena is a continuation of the eAthena project.

# โปรแกรมจำเป็นสำหรับการเปิดเซิร์ฟเวอร์
1. จำลองฐานข้อมูล : [Wamp](https://sourceforge.net/projects/wampserver/files)
2. โปรแกรมช่วยในการเข้าฐานข้อมูล : [Navi V.15](https://i-loadzone.com/navicat-premium)
3. โปรแกรมแก้ไขโค้ด : [Notepad++](https://notepad-plus-plus.org/downloads)
4. Command สำหรับรัน github : [Git bash](https://git-scm.com/downloads)
5. โปรแกรมแก้ไข Grf : [Grf editor](http://www.mediafire.com/?aflylbhblrzpz0h)
6. โปรแกรม Clone Server : [GitHub Desktop](https://desktop.github.com)
7. แก้ปัญหารัน Error : [All in One Runtimes](https://www.computerbase.de/downloads/systemtools/all-in-one-runtimes)
8. โปรแกรม Compile เซิร์ฟเวอร์ : [Visual Studio 2022](https://visualstudio.microsoft.com/vs)

👍🏻 Pull requests ที่มีในเซิฟ ⚠️ 
1. The Box 4 Monster Dynamic Damage + ใส่ enchan ได้เหมือนการ์ด หากไม่ต้องการให้แก้ตามนี้ [.patch](http://bit.ly/43yWVMc)
>   ปรับลดดาเมจมอนได้ที่ "\MiX\conf\import\battle_conf.txt"
2. 4th / Expanded Job Skill-Updates as of KRO 20220602 incl. 3rd Job fixes / Homunculus skills #7024
3. Initial implementation of the goldpc timer #7410
4. Added rate per refine in laphine upgrade #7252
5. Fixes character_slots is higher than supported MAX_CHARS #7471
6. Adds Spirit Handler to Summoner checks #7069
7. Fixes some item bonuses not applying from combos #7118
8. Implemented Kachua's Secret Box NPC #7416
9. Added 1@begi mapflag to prevent status abuse #7535
10. Fix roulette issue #7581
11. Add chance table for roulette #7620
12. Correction of the clone mode #7734
13. Fixed PLAGIARIZED skill would cause skill data loss #6771

🫰 __SRC Modify__ 🐥
1. Adds IT_CHARM ไม่ได้สร้างไอเทมให้ลงแค่ SRC
2. Prevent hitting mobs near NPC or Warper 1.0.0 By pajodex
3. MAX_AMOUNT 32000
4. Added new Guild member variable ตั้งค่าคนในกิลผ่าน char_athena.conf
5. ระบบ goldpc แลกแคชได้เงื่อนไข 1 Hr. แลกได้ 1 cash แก้ไขเพิ่มที่ goldpc.txt
6. ระบบ Check Equip แบบ MENU
7. เพิ่มระบบ limit the sale value of all จำกัดราคาขาย แก้ไขราคาที่ "\MiX\conf\import\battle_conf.txt" 
>   "limit_sale_price: 5000000"
8. เพิ่มระบบ Randomly drop all MVP items. [null] ฆ่า MVP มีโอกาสสุ่มดรอปไอเทม

🤪 Dungeon ที่ยังไม่เข้า 🤟🏻
1. Initial release of Illusion of Twins #7524
2. Initial release of Abyss 4 dungeon #7601
3. Clock tower unknown basement #7626
4. 17.1 Dungeon - Odin Past. #6486
5. เพิ่ม Geffen Night Arena by. @GS,.Editored

#🛠️ Tools 🧰 
1. adds rAthena Server Monitor - โหลดเร็วกว่า runser.bat
>แต่หากปิดเซิฟจะโรแบล็ค 1-3 นาทีเนื่องจากไม่มีฟั่งชั่น ctrl+c เพื่อหยุดการทำงาน
>ขอขอบคุณ @T5ive ที่แบ่งปั่นครับ

### Hardware
Hardware Type | Minimum | Recommended
------|------|------
CPU | 2 Core | 4 Cores
RAM | 2 GB | 4 GB
Disk Space | 2 GB | 20 GB

### Operating System & Preferred Compiler
Operating System | Compiler
------|------
Windows | [MS Visual Studio 2022 or newer](https://www.visualstudio.com/downloads/)

## License
Copyright (c) rAthena Development Team - Licensed under [GNU General Public License v3.0](https://github.com/rathena/rathena/blob/master/LICENSE)
