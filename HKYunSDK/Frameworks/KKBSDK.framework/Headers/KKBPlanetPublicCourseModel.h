//
//  KKBPlanetPublicCourseModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"
#import "KKBResModel.h"
#import "KKBContentModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetPublicCourseModel : KKBBaseModel

@property (nonatomic, assign) uintID courseId;
@property (nonatomic, strong) NSString *courseName;
@property (nonatomic, strong) NSString *coverImgPathMobile;
@property (nonatomic, strong) NSString *contentImgPathMobile;
@property (nonatomic, assign) uintID contentId;
@property (nonatomic, strong) NSDate *startTime;
@property (nonatomic, strong) NSDate *endTime;
@property (nonatomic, assign) KKBContentType contentType; //公开课当前类型
@property (nonatomic, assign) BOOL isApply;  //公开课是否报名
@property (nonatomic, assign) BOOL isSupportPlayback;
@property (nonatomic, assign) uintID liveId;
@property (nonatomic, strong) NSString *playPassword;
@property (nonatomic, strong) NSString *playUrl;
@property (nonatomic, assign) KKBCourseLiveStatus status;
@property (nonatomic, assign) uintID teacherUid;
@property (nonatomic, strong) NSString *teacherNickname;
@property (nonatomic, strong) NSString *teacherAvatar;
@property (nonatomic, assign)uintID     last_video_id;   //播放记录视频id
@property (nonatomic, assign)NSUInteger last_time;       //上次播放位置
@property (nonatomic, strong) NSArray<KKBResModel *> *boot_param_list;

@end

NS_ASSUME_NONNULL_END
