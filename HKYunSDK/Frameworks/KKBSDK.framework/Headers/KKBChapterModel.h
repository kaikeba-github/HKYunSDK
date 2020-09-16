//
//  KKBChapterModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/4/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBChapterModel : KKBBaseModel

@property(nonatomic, assign)uintID          course_id;
@property(nonatomic, assign)uintID          chapter_id;
@property(nonatomic, strong)NSString        *chapter_name;
@property(nonatomic, assign)NSUInteger      rank_num;
@property(nonatomic, assign)BOOL            is_locked; // 锁定类型：0是未锁定，1为锁定
@property(nonatomic, assign)BOOL            auth_status; // 0未授权，1已授权
@property(nonatomic, strong)NSString        *intro;
@property(nonatomic, assign)NSUInteger      progress;
@property(nonatomic, assign)uintID          creator_uid;
@property(nonatomic, strong)NSDate          *updated_at;
@property(nonatomic, strong)NSDate          *created_at;
@property(nonatomic, strong)NSString        *locked_desc;
@property(nonatomic, strong)NSMutableArray<KKBSectionModel*> *section_list;


@property(nonatomic, assign)BOOL isFullData;

@end

NS_ASSUME_NONNULL_END
