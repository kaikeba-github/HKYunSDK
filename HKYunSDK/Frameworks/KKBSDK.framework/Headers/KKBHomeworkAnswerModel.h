//
//  KKBHomeworkAnswerModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/7/26.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@class KKBResModel;
@interface KKBHomeworkAnswerModel : KKBBaseModel

/* 学生作答 */
@property (nonatomic, assign)NSUInteger homework_finished_time; //作业提交时间
@property (nonatomic, strong)NSString *homework_remark; //作答文本描述
@property (nonatomic, strong)NSArray<KKBResModel *> *answer_content;



@end

NS_ASSUME_NONNULL_END
