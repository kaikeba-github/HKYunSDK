//
//  KKBUserFeedbackRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/7/12.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBUserFeedbackRequest : KKBLearningCenterRequest

/*
 **** param ****
 
 "channel": 1, //1:ios, 2:android, 3:web
 
 
 content          最大140个汉字
 contact（选填）   最大50个字符
 
 
 */

- (instancetype)initWithRmark:(NSString *)remark WithContact:(NSString *)contact;

@end

NS_ASSUME_NONNULL_END
