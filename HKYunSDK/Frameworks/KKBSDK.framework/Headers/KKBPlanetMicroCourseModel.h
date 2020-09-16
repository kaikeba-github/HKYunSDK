//
//  KKBPlanetMicroCourseModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetMicroCourseModel : KKBBaseModel
@property (nonatomic, assign) uintID courseId;
@property (nonatomic, strong) NSString *courseName;
@property (nonatomic, strong) NSString *coverImgPathMobile;
@property (nonatomic, assign) NSInteger status;
//-------------- 播放记录 ---------------------
@property (nonatomic, assign) uintID  lastCourseId;

@property (nonatomic, assign) uintID lastChapterId;
@property (nonatomic, assign) NSInteger chapterRankNum;
@property (nonatomic, strong) NSString *locationDesc;

@property (nonatomic, assign) uintID lastSectionId;
@property (nonatomic, assign) NSInteger sectionRankNum;
@property (nonatomic, strong) NSString *sectionName;

@property (nonatomic, assign) uintID lastContentId;
@property (nonatomic, assign) NSInteger contentRankNum;


@end

NS_ASSUME_NONNULL_END
