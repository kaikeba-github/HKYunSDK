//
//  KKBHomeworkModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/7/25.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBResModel;
@class KKBHomeworkTeacherReviewModel;
@class KKBHomeworkAnswerModel;
@interface KKBHomeworkModel : KKBBaseModel


/* 老师点评 */
@property (nonatomic, strong)KKBHomeworkTeacherReviewModel *teacher_review;

/* 学生作答 */
@property (nonatomic, strong)KKBHomeworkAnswerModel *student_answer;

/* 作业内容 */
@property (nonatomic, strong)NSString *title;  
@property (nonatomic, strong)NSArray<KKBResModel *> *homework_content;



@end

NS_ASSUME_NONNULL_END
