//
//  KKBCourseSectionEvaluationSubmitRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/12/28.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBLearningCenterRequest.h>
#import <KKBSDK/KKBSectionModel.h>

NS_ASSUME_NONNULL_BEGIN

@class KKBCourseSectionEvaluationTagModel;
@interface KKBCourseSectionEvaluationSubmitRequest : KKBLearningCenterRequest


/*
** 课程章节评价提交 **
*/

- (instancetype)initWithSection:(KKBSectionModel *)section WithScore:(NSInteger)score WithTags:(NSArray<KKBCourseSectionEvaluationTagModel *> * _Nullable)tags WithContent:(NSString * _Nullable)content;
@end

NS_ASSUME_NONNULL_END
