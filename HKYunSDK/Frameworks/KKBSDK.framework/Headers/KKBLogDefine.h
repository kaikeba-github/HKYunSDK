//
//  KKBLogDefine.h
//  KKBSDK
//
//  Created by Duane on 2020/2/27.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#ifndef KKBLogDefine_h
#define KKBLogDefine_h

/**
 普通log输出
 KKBLogShow ==> 1:输出 0:不输出
 */

#if (KKB_LOG_DEBUG)  //&& XiaoZhiSuJi_DEBUG == 1
#define KKBLog(...) NSLog(@"KKBLog==>:%s\n %@\n\n", __func__, [NSString stringWithFormat:__VA_ARGS__])
#else
#define KKBLog(...) {}
#endif


/**
 打点模块模块log输出
 AnalyticsLogShow ==> 1:输出 0:不输出
 */

#if (KKB_LOG_DEBUG)
#define Analyticslog(...) NSLog(@"Analyticslog==>:%s\n %@\n\n", __func__, [NSString stringWithFormat:__VA_ARGS__])
#else
#define Analyticslog(...) {}
#endif


/**
 网络请求log输出
 NetWorkLogShow ==> 1:输出 0:不输出
 */

#if (KKB_LOG_DEBUG)
#define NetWorkLog(...) NSLog(@"NetWorkLog==>:%s\n %@\n\n", __func__, [NSString stringWithFormat:__VA_ARGS__])
#else
#define NetWorkLog(...) {}
#endif


#endif /* KKBLogDefine_h */
