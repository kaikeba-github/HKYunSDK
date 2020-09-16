//
//  KKBSDKCourseExamInfoRequest.h
//  KKBSDK
//
//  Created by Duane on 2020/4/26.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKCourseExamInfoRequest : KKBLearningCenterRequest

- (instancetype)initWithExamId:(uintID)examId contentId:(uintID)contentId;

@end

NS_ASSUME_NONNULL_END
