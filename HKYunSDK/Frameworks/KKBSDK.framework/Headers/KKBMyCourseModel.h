//
//  KKBMyCourseModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/5/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBRecentLiveLocationModel : KKBBaseModel

@property (nonatomic, strong)KKBChapterModel *chapter;
@property (nonatomic, strong)KKBSectionModel *section;
@property (nonatomic, strong)KKBContentModel *content;
@property (nonatomic, strong)NSString *desc;

@end

@interface KKBRecentLiveModel : KKBBaseModel

@property (nonatomic, assign)uintID liveId;
@property (nonatomic, assign)uintID contentId;
@property (nonatomic, assign)uintID groupId;
@property (nonatomic, assign)uintID sectionId;
@property (nonatomic, assign)uintID chapterId;
@property (nonatomic, assign)uintID courseId;
@property (nonatomic, assign)KKBVideoResType liveVendor;
@property (nonatomic, strong)NSString *liveBootParams;
@property (nonatomic, strong)NSDate *startTime;
@property (nonatomic, assign)KKBCourseLiveStatus status;
@property (nonatomic, strong)KKBRecentLiveLocationModel *location;

- (BOOL)isValid;

@end

@interface KKBLastInfoModel : KKBBaseModel

@property (nonatomic, assign)uintID courseId;
@property (nonatomic, strong)NSString *locationDesc;
@property (nonatomic, strong)KKBChapterModel *chapter;
@property (nonatomic, strong)KKBSectionModel *section;
@property (nonatomic, strong)KKBContentModel *content;

- (BOOL)isValid;

@end

@interface KKBMyCourseModel : KKBBaseModel

@property (nonatomic, assign)uintID courseId;
@property (nonatomic, strong)NSString *courseName;
@property (nonatomic, strong)NSString *coverImgPathMobile;
@property (nonatomic, assign)KKBCourseType type;
@property (nonatomic, strong)NSString *intro;
@property (nonatomic, assign)KKBCourseStatus expiredStatus;
@property (nonatomic, strong)KKBRecentLiveModel *recentLive;
@property (nonatomic, strong)KKBLastInfoModel *lastInfo;
@property (nonatomic, assign)NSUInteger studyProgress;
@property (nonatomic, strong)NSDate *addStudentTime;
@property (nonatomic, strong)NSString *redirectUrl;

@end

NS_ASSUME_NONNULL_END
