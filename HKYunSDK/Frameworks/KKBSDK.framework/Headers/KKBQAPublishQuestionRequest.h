//
//  KKBQAPublishQuestionRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/8/9.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"
#import "KKBQAModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBQAPublishQuestionRequest : KKBLearningCenterRequest

- (instancetype)initWithType:(KKBQAType)aqType courseId:(uintID)courseId WithSectionId:(uintID)sectionId WithContent:(NSString *)content WithPics:(NSArray *)pics;

@end

NS_ASSUME_NONNULL_END
