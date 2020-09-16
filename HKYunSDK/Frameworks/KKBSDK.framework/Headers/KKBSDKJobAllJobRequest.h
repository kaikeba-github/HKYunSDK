//
//  KKBSDKJobAllJobRequest.h
//  KKBSDK
//
//  Created by 西门桃桃 on 2020/4/16.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKJobAllJobRequest : KKBSDKJobBaseRequest

- (instancetype)initWithPage:(NSInteger)page;
- (instancetype)initWithPage:(NSInteger)page count:(NSUInteger)count;

@end

NS_ASSUME_NONNULL_END
