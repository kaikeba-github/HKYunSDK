//
//  KKBSDKCourseQuestionnaireInfoRequest.h
//  KKBSDK
//
//  Created by Duane on 2020/5/12.
//  Copyright © 2020 KaiKeBa. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

@interface KKBSDKCourseQuestionnaireInfoRequest : KKBLearningCenterRequest

- (instancetype)initWithFormId:(NSString *)formId contentId:(uintID)contentId;

@end

NS_ASSUME_NONNULL_END
