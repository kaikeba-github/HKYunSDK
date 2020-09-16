//
//  KKBVideoRecordUpload.h
//  KaiKeBa
//
//  Created by zddMac on 2019/5/15.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBVideoRecordUpload : KKBLearningCenterRequest

- (instancetype)initWithContentId:(uintID)contentId WithVideoId:(uintID)videoId WithLastTime:(NSUInteger)lastTime;


@end

NS_ASSUME_NONNULL_END
