//
//  KKBHomeworkTeacherReviewModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/7/26.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBBaseModel.h>
#import <KKBSDK/KKBResModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBHomeworkTeacherReviewModel : KKBBaseModel

/*老师点评*/
@property (nonatomic, assign)NSUInteger score;  //得分
@property (nonatomic, assign)NSUInteger review_time; //老师点评时间
@property (nonatomic, strong)NSString  *comment;
@property (nonatomic, strong)NSArray<KKBResModel *> *correct_content;

@end

NS_ASSUME_NONNULL_END
