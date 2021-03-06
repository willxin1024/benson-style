#ifndef __REDISSTRING_H__
#define __REDISSTRING_H__

/*
 * =====================================================================================
 *
 *       Filename:  redis_string.h
 *
 *    Description:  wrapper for redis client(string)
 *
 *        Version:  1.0
 *        Created:  2016-08-08
 *
 *         Author:  zhihaibang
 *
 * =====================================================================================
 */
#include "hiredis.h"
#include "redis_client.h"
#include <string>
#include <stdint.h>
using namespace std;

class RedisString : public RedisClient {
  public:
    int Set(const string &key, const char *value, size_t len);
    int Set(const string &key, const string &value);
    int SetEX(const string &key, const char *value, size_t len, int sec);//EX seconds - 设置指定的到期时间，单位为秒
    int SetEX(const string &key, const string &value, int sec);
    int Get(const string &key, string &value);
};

#endif //!__REDISSTRING_H__

