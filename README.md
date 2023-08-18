<img width="100%" src="https://i.pinimg.com/originals/62/33/2d/62332d52843de1fb48d463735a91ffda.gif"/>

# MINI PROJECT : Busan subway shortest distance in Dijkstra Algorithm
### This program is a mini-project that will be created using the Dijkstra Algorithm and C language.  

### And the reason why I made this program was that I wanted to make a small project through a discrete algorithm that I learned at university to study alone, and among them, I was most impressed by the Dijkstra algorithm, I am planning to make the shortest route of Busan subway.  

## Checklist
|Checklist|Check|
|---------|----|
|**A study of Dijkstra Algorithm**|❌|
|**A Survey of the Distance Between Subway in Busan**|✅|
|**realization**|❌|
***


<br>

[[REFERENCE1] : Dijkstra Algorithm](https://velog.io/@717lumos/알고리즘-다익스트라Dijkstra-알고리즘)

<br>

## Dijkstra Algorithm
![Dijkstra_Algorithm](https://github.com/FreshSider04/Short_Subway_in_Busan/assets/120298512/7c2f57d0-3a0a-4c85-ad26-03c2b01dfff0)
***

<br>

## A Survey of the Distance Between Subway in Busan

     1호선 (노포동~다대포해수욕장 41.4km)

**노포** <-- 1.2km --> **범어사** <-- 0.9km --> **남산** <-- 1.0km --> **두실** <-- 1.0km --> **구서** <-- 1.1km --> **장전** <-- 1.0km --> **부산대** <-- 1.1km --> **온천장** <-- 1.0km --> **명륜** <-- 0.8km --> **동래** <-- 1.2km --> **교대** <-- 1.0km --> **연산** <-- 0.9km --> **시청** <-- 0.8km --> **양정** <-- 1.4km --> **부전** <-- 0.6km --> **서면** <-- 1.2km --> **범내골** <-- 0.8km --> **범일** <-- 0.8km --> **좌천** <-- 0.9km --> **부산진** <-- 0.8km --> **초량** <-- 0.8km --> **부산역** <-- 1.1km --> **중앙** <-- 0.9km --> **남포** <-- 0.7km --> **자갈치** <-- 1.0km --> **토성** <-- 1.2km --> **동대신** <-- 0.7km --> **서대신** <-- 1.4km --> **대티** <-- 0.8km --> **괴정** <--0.9km --> **사하** <-- 0.9km --> **당리** <-- 0.8km --> **하단** <-- 1.6km --> **신평** <-- 1.6km -->**동매** <-- 1.5km --> **장림** <-- 1.1km --> **신장림** <-- 1.8km --> **낫개** <-- 1.3km --> **다대포항** <-- 1.6km -> **다대포해수욕장**
#

     2호선 (양산~장산 45.2km)

**양산** <-- 1.6km --> **남양산** <-- 1.1km --> **부산대양산캠퍼스** <-- 1.0km -> **증산*** <-- 3.5km --> **호포** 1.5km **금곡** 1.0km **동원** <-- 1.5km --> **율리** <-- 1.2km --> **화명** <-- 1.5km --> **수정** <-- 1.5km --> **덕천** <-- 1.2km --> **구명** <-- 0.7km --> **구남** <-- 1.1km --> **모라** <-- 1.0km --> **모덕** <-- 0.8km --> **덕포** <-- 1.2km --> **사상** <-- 1.1km --> **감전** <-- 1.2km --> **주례** <-- 0.9km --> **냉정** <-- 0.8km --> **개금** <-- 1.1km --> **동의대** <-- 0.9km --> **가야** <-- 0.7km --> **부암** <-- 0.8km --> **서면** <-- 1.1km --> **전포** <-- 0.8km --> **문전** <-- 0.8km --> **문현** <-- 0.8km --> **지게골** <-- 0.9km --> **못골** <-- 0.7km --> **대연** <-- 0.9km --> **경성대부경대** <-- 0.8km --> **남천** <-- 0.9km --> **금련산** <-- 0.9km --> **광안** <-- 0.9km --> **수영** <-- 0.9km --> **민락** <-- 1.0km --> **센텀시티** <-- 0.8km --> **시립미술관** <-- 1.1km --> **동백** <-- 1.2km --> **해운대** <-- 0.9km --> **중동** <-- 0.9km --> **장산**
 #
     3호선 (대저~수영 18.1km)

**대저** <-- 0.8km --> **체육공원** <-- 1.1km --> **강서구청** <-- 1.6km --> **구포** <-- 1.1km --> **덕천** <-- 0.7km --> **숙등** <-- 1.0km --> **남산정** <-- 1.1km --> **만덕** <-- 3.3km --> **미남** <-- 0.8km --> **사직** <-- 0.8km --> **종합운동장** <-- 0.7km --> **거제** <-- 0.7km --> **연산** <-- 1.1km --> **물만골** <-- 1.1km --> **배산** <-- 1.2km --> **망미** <-- 1.0km --> **수영**
 #
      4호선 (미남~안평 12km)

**미남** <-- 1.0km --> **동래** <-- 0.7km --> **수안** <-- 0.7km --> **낙민** <-- 0.7km --> **충렬사** <-- 0.7km --> **명장** <-- 1.0km --> **서동** <-- 0.8km --> **금사** <-- 0.8km --> **반여농산물사장** <-- 1.2km --> **석대** <-- 1.4km --> **영산대** <-- 1.1km --> **윗반송** <-- 0.8km --> **고촌** <-- 1.1km --> **안평**
#
    부산김해선 (사상~가야대 22.6km)
  **사상** <-- 0.8km --> **괴법르네시떼** <-- 2.3km --> **서부산유통지구** <-- 0.9km --> **공항** <-- 1.3km --> **덕두** <-- 1.9km --> **등구** <-- 2.0km--> **대저** <-- 1.0km --> **평강** <-- 1.2km --> **대사** <-- 1.1km --> **불암** <-- 0.7km --> **지내** <-- 0.8km --> **김해대학** <-- 1.3km --> **인제대** <-- 1.0km --> **김해시청** <-- 0.6km --> **부원** <-- 1.0km --> **봉황** <-- 0.7km --> **수로왕릉** <-- 0.8km --> **박물관** <-- 1.1.km --> **연지공원** <-- 1.2km --> ***장신대** <-- 0.9km --> **가야대**
#
    동해선 광역철도 (부전~태화강 63.8km)
**부전** <-- 2.3km --> **거제해맞이** <-- 1.0km --> **거제** <-- 0.7km --> **교대** <-- 1.2km --> **동래** <-- 0.9km --> **안락** <-- 1.3km --> **부산원동** <-- 1.0km --> **재송** <-- 1.0km --> **센텀** <-- 1.4km --> **벡스코** <-- 4.5km --> **신해운대** <-- 2.9km --> **송정** <-- 1.1km --> **오시리아** <-- 5.7km --> **기장** <-- 3.0km --> **일광** <-- 5.3km --> **좌천** <-- 3.4km --> **월내** <-- 
2.5km --> **서생** <-- 8.4km --> **남창** <-- 4.4km --> **망양** <-- 4.5km --> **덕하** <-- 2.4km --> **개운포** <-- 4.9km --> **태화강**
#
-- **환승 역**--
- 동래역(부산 1호선, 부산 4호선)
- 교대역(부산 1호선, 동해선 광역철도)
- 연산역(부산 1호선부산 3호선)
- 서면역(부산 1호선, 부산 2호선)
- 덕천역(부산 2호선, 부산 3호선)
- 사상역(부산2호선, 부산-김해 경전철)
- 수영역(부산 2호선, 부산 3호선)
- 벡스코역(부산 2호선, 동해선 광역철도)
- 대저역(부산 3호선, 부산-김해 경전철)
- 미남역(부산 3호선, 부산 4호선)
- 거제역(부산 3호선, 동해선 광역철도)
#
***  

## realization
*** 
