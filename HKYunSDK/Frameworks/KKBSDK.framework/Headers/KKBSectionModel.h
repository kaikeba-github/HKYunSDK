//
//  KKBSectionModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/4/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSectionModel : KKBBaseModel

@property (nonatomic, assign)uintID         course_id;
@property (nonatomic, assign)uintID         chapter_id;
@property (nonatomic, assign)uintID         section_id;
@property (nonatomic, strong)NSString       *section_name;
@property (nonatomic, assign)NSUInteger     rank_num;
@property (nonatomic, assign)BOOL           is_locked;
@property (nonatomic, strong)NSString       *locked_desc;
@property (nonatomic, assign)NSUInteger     progress;
@property (nonatomic, assign)NSUInteger     total_question_count;   //全部问题数
@property (nonatomic, assign)NSUInteger     self_question_count;    //用户提问数
@property (nonatomic, assign)NSUInteger     self_answer_count;      //用户回答数
@property (nonatomic, strong)NSMutableArray<KKBContentModel*> *content_list;

@end

NS_ASSUME_NONNULL_END
