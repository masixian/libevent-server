#pragma once

#pragma pack(1)

///游戏组件信息结构 （服务器动态库组件获取）
struct ServerDllInfoStruct
{
	///游戏组件信息
	UINT						uServiceVer;						///服务版本
	UINT						uNameID;							///游戏名字 ID
	UINT						uSupportType;						///支持类型
	UINT						uDeskPeople;						///游戏人数
	char						szGameName[61];						///游戏名字
	char						szGameTable[61];					///数据库表名字
	char						szDLLFileName[61];					///文件名字

	///辅助信息
	char						szWriter[61];						///软件开发者
	char						szDllNote[51];						///备注信息
};

//公共组件加载信息结构	（服务器设置数据）
struct ManageInfoStruct
{
	bool						bPrivate;							//是否私有房
	char						szGameTable[31];					///信息表名字
	char						szGameRoomName[61];					///服务器名字
	///游戏信息
	UINT						uNameID;							///游戏名字 ID
	///设置信息
	UINT						uComType;							///游戏类型
	UINT						uDeskType;							///游戏桌类型，主要为添加百家乐桌
	UINT						uBasePoint;							///游戏基础分
	UINT						uLessPoint;							///游戏的最少分数
	UINT						uMaxPoint;							///游戏的最大分数
	UINT						uMaxLimite;							///最大封顶值
	UINT						uRunPublish;						///逃跑扣分
	UINT						uTax;								///税收比例
	UINT						uListenPort;						///监听端口
	UINT						uMaxPeople;							///最大连接数目
	char						szCenterIP[24];						///中心服ip
	///服务器信息
	UINT						uRoomID;							///游戏服务器 ID 号码
	int							iRoomType;							///房间类型
	int							iRoomSort;							///房间分类
	int							iRoomLevel;							///房间等级
	UINT						uDeskCount;							///游戏桌数目
	char						bCanCombineDesk;					///是否可以组桌

	ManageInfoStruct()
	{
		memset(this, 0, sizeof(ManageInfoStruct));
	}
};

//内核数据 （服务器 动态库 组件启动设置）
struct KernelInfoStruct
{
	UINT						uNameID;							//游戏名字 ID 号码
	UINT						uDeskPeople;						//游戏人数
	BYTE						bMaxVer;							//软件最高版本
	BYTE						bLessVer;							//软件最低版本
	BYTE						bStartTCPSocket;					//是否启动网络
	UINT						uTimerCount;						//定时器数量

	KernelInfoStruct()
	{
		memset(this, 0, sizeof(KernelInfoStruct));
	}
};

#pragma pack()

