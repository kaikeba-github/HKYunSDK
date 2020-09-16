//
//  KKBCourseFeedbackRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/7/12.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBCourseFeedbackRequest : KKBLearningCenterRequest

/*
 **** param ****
 
 course_id       课程ID
 content_score   内容评分1-10分
 teach_score     讲师评分 1-10分
 serve_score     服务评分 1-10分
 remark          最大140个汉字
 contact（选填）   最大50个字符
 
 
 */

- (instancetype)initWithFeedbackInfo:(NSDictionary *)param;

@end

NS_ASSUME_NONNULL_END
