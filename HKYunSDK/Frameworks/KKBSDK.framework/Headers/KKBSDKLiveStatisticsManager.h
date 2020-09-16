//
//  KKBSDKLiveStatisticsManager.h
//  KKBSDK
//
//  Created by Duane on 2020/6/24.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKLiveStatisticsManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBSDKLiveStatisticsManager)

- (BOOL)enterLiveContent:(uintID)contentId;
- (void)exit;

@end

NS_ASSUME_NONNULL_END
