//
//  KKBSDKDataType.h
//  KKBSDK
//
//  Created by Duane on 2020/3/10.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#ifndef KKBSDKDataType_h
#define KKBSDKDataType_h

typedef int64_t intID;
typedef uint64_t uintID;

typedef NS_ENUM(NSInteger, KKBAppClientType) {
    KKBAppClientType_iOS = 1, // iOS
    KKBAppClientType_Android = 2, // Android
    KKBAppClientType_Enterprise_iOS = 3, // 企业版iOS
    KKBAppClientType_Enterprise_Android = 4, // 企业版Android
};

#endif /* KKBSDKDataType_h */
