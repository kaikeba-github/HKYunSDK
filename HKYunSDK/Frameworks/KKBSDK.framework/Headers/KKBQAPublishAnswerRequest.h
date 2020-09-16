//
//  KKBQAPublishAnswerRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/9.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBQAPublishAnswerRequest : KKBLearningCenterRequest

- (instancetype)initWithTreadId:(uintID)treadId WithContent:(NSString *)content WithPics:(NSArray *)pics;

@end

NS_ASSUME_NONNULL_END
