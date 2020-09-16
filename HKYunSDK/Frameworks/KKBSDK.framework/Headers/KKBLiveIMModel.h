//
//  KKBLiveIMModel.h
//  KKBSDK
//
//  Created by zddMac on 2020/4/16.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBLiveIMModel : KKBBaseModel
@property (nonatomic, assign) uintID content_id; //所属contentId
@property (nonatomic, assign) uintID im_group_id;
@property (nonatomic, strong) NSString *tim_group_id;   //腾讯im群id
@property (nonatomic, strong) NSArray *class_teacher_uid;  //班主任
@property (nonatomic, strong) NSArray *assistant_uid;   //助教
@property (nonatomic, strong) NSArray *teacher_uid;  //讲师

@end

NS_ASSUME_NONNULL_END
