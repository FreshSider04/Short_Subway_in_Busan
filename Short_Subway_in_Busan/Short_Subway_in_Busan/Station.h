#pragma once

// 여기는 역에서 역까지의 정보를 담고 있는 헤더파일입니다.

// 무한, 여기서는 모든 가중치를 더 해도 나올 수 없는 값으로 했다.
# define INF 10000.00
# define VERTEX_COUNT 40

extern enum station
{
	//1호선
	노포,
	부산대,
	동래,
	교대,
	연산,
	서면,
	부산역,
	남포,
	사하,
	하단,
	다대포해수욕장,

	// 2호선
	양산,
	부산대양산캠퍼스,
	덕천,
	구남,
	사상,
	동의대,
	국제금융센터·부산은행,
	대연,
	수영,
	벡스코,
	해운대, 
	장산,

	// 3호선
	대저,
	구포,
	남산정,
	미남,
	사직,
	거제,
	배산,

	// 4호선
	안평,

	// 부산-김해 경전철
	공항,
	대사,
	봉황,
	가야대,

	//동해선
	부전,
	안락,
	기장,
	덕하,
	태화강
};

extern double station_weight[VERTEX_COUNT][VERTEX_COUNT] =
{
	// 1호선
	
	//노포역 = 0번
	{INF, 6.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 부산대 = 1번
	{6.2, INF, 2.9, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	//동래 = 2번
	{INF, 2.9, INF, 1.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1.0, INF, INF, INF, 11.0, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 교대 = 3번
	{INF, INF, 1.2, INF, 1.0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0.7, INF, INF, INF, INF, INF, INF, INF, 2.1, INF, INF, INF},
	// 연산 = 4번
	{INF, INF, INF, 1.0, INF, 8.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 서면 = 5번
	{INF, INF, INF, INF, 8.2, INF, 5.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, 2.4, 1.9, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 부산역 = 6번
	{INF, INF, INF, INF, INF, 5.2, INF, 2.0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 남포 = 7번
	{INF, INF, INF, INF, INF, INF, 2.0, INF, 6.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 사하 = 8번
	{INF, INF, INF, INF, INF, INF, INF, 6.7, INF, 1.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 하단 = 9번
	{INF, INF, INF, INF, INF, INF, INF, INF, 1.7, INF, 10.5, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 다대포해수욕장 = 10번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, 10.5, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},

	// 2호선

	// 양산 = 11번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 2.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 부산대양산캠 = 12번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 2.7, INF, 12.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 덕천 = 13번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 12.7, INF, 1.9, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1.1, 1.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 구남 = 14번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1.9, INF, 4.1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 사상 = 15번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.1, INF, 5.1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.0, INF, INF, INF, INF, INF, INF, INF, INF},
	// 동의대 = 16번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 5.1, INF, 2.4, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 국제금융센터·부산은행 = 17번
	{INF, INF, INF, INF, INF, 1.9, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 대연 = 18번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3.2, INF, 4.4, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 수영 = 19번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.4, INF, 2.7, INF, INF, INF, INF, INF, INF, INF, INF, 2.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 벡스코 = 20번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 2.7, INF, 2.3, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.7, 14.2, INF, INF},
	// 해운대 = 21번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 2.3, INF, 1.9, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 장산 = 22번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1.9, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},

	// 대저 = 23번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3.5, INF, INF, INF, INF, INF, INF, 5.2, 2.2, INF, INF, INF, INF, INF, INF, INF},
	// 구포 = 24번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3.5, INF, 1.1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 남산정 = 25번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1.1, INF, 1.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 미남 = 26번
	{INF, INF, 1.0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 1.7,INF, 4.5, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 사직 = 27번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.5, INF, 0.8, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 거제 = 28번
	{INF, INF, INF, 0.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0.8, INF, 1.5, INF, INF, INF, INF, INF, 3.3, INF, INF, INF, INF},
	// 배산 = 29번
	{INF, INF, INF, INF, 2.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 2.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},


	// 4호선
	// 안평 = 30번
	{INF, INF, 11.0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},


	// 공항 = 31번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.0, INF, INF, INF, INF, INF, INF, INF, 5.2, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 대사 = 32번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 2.2, INF, 6.5, INF, INF, INF, INF, INF, INF},
	// 봉황 = 33번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 6.5, INF, 4.7, INF, INF, INF, INF, INF},
	// 가야대 = 34번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.7, INF, INF, INF, INF, INF, INF},

	//동해선
	
	// 부전(동해선) = 35번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3.3, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 안락 = 36번
	{INF, INF, INF, 2.1, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
	// 기장 = 37번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4.7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 31.5, INF},
	// 덕하 = 38번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 7.3},
	// 태화강 = 39번
	{INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 7.3, INF},
};