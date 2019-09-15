#pragma once

enum TimeFormat
{
	TIME_YYYYMMDD = 0,		// 20170802
	TIME_YYYYMMDDHHmm,		// 201708021200
};

struct Util_KeyValueStruct_
{
	int key_;
	long long value_;
	Util_KeyValueStruct_()
	{
		memset(this, 0, sizeof(Util_KeyValueStruct_));
	}
};

// ������
class CUtil
{
public:
	CUtil();
	~CUtil();

public:
	// ����ַ���
	static bool CheckString(const char* src);
	// ��#��%���滻�ɣ�
	static bool CheckString(char* src, int size);
	// �ָ��ַ���
	static void SplitString(std::string str, std::string pattern, std::vector<std::string> &vecSplitData);
	static std::string &TrimString(std::string &s);
	// ��ȡuuid
	static void GetUuid(char* out, int len);
	// MD5����
	static void MD5(std::string &str);
	// ��ȡ��ǰʱ��
	static long long GetTime(int format);
	// ��ʱ����л�ȡ����
	static int GetDateFromTimeStamp(time_t time);
	// ��ʱ����л�ȡweekday (0-6)
	static int GetWeekdayFromTimeStamp(time_t time);
	// ��ʱ����л�ȡСʱ (0-23)
	static int GetHourTimeStamp(time_t time);
	// ����json����
	static std::string ParseJsonValue(const std::string& src, const char* key);
	// �Ƿ�������д�
	static bool IsContainDirtyWord(const std::string& str);
	// ����ļ��в������򴴽��ļ���
	static void MkdirIfNotExists(const char* dir);
	// �ַ���ת��
	static std::string Tostring(BYTE value);
	static std::string Tostring(int value);
	static std::string Tostring(long value);
	static std::string Tostring(size_t value);
	static std::string Tostring(long long value);
	static std::string Tostring(double value);
	// �滻�ַ���
	static void ReplaceStr(char str[], int count, char src, char dst);
	// �ַ�����������
	static bool GetKeyAndValue(const char * pStr, int &iKey, long long &llValue);
	static void ArrayToString(long long * pArray, int iArrayCount, char * pStr);
	static void StringToArray(char * pStr, long long * pArray, int &iArrayCount);
	static void KYArrayToString(Util_KeyValueStruct_ * pKYArray, int iArrayCount, char * pStr);
	static void StringToKYArray(char * pStr, Util_KeyValueStruct_ * pKYArray, int &iArrayCount);
	// ��ȡһ�����������Χ0-65535
	static unsigned int GetRandNum();
	// ��ȡ[A,B)�����,min<= ����� < iMax
	static int GetRandRange(int iMin, int iMax);
	// ת���ַ���
	static void TransString(char * pStr, int iCount, int iMaxSignCount, bool bUTF = false);
	// �ַ�����ϣ����
	static unsigned int BKDRHash(const char *str);
	static unsigned int APHash(const char *str);
	static unsigned int DJBHash(const char *str);
	static bool GetScoreFromUserInfoList(int userID, char* userInfoList, long long &llScore);
	// У��ͷ��
	static bool CheckCode(UINT uReserve);
	// ���ݾ�γ�ȼ�����루��λm��
	static double GetDistanceVer(const char * lat1, const char *  lng1, const char *  lat2, const char *  lng2);
};