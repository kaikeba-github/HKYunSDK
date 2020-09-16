//
//  KKBNpsSatisfactionFeedbackRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/27.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBNpsSatisfactionFeedbackRequest : KKBLearningCenterRequest

- (instancetype)initWithScore:(NSInteger)score WithContent:(NSString *)content;

@end

NS_ASSUME_NONNULL_END
