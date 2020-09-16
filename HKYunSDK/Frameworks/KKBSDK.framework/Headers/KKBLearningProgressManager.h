//
//  KKBLearningProgressManager.h
//  KaiKeBa
//
//  Created by zddMac on 2019/5/10.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

//学习进度时长上报
@interface KKBLearningProgressManager : NSObject

DEFINE_SINGLETON_FOR_H(KKBLearningProgressManager)

//学习时长 学习进度上报
- (void)startStudy:(uintID)contentId WithDefaultProgress:(NSUInteger)progress;
- (void)stopStudy:(uintID)contentId WithProgress:(NSUInteger)progress;

//播放视频学习进度上报
- (void)videoUploadStudyWithContentId:(uintID)contentId WithProgress:(NSInteger)progress;

//跳出页面处理 如:classin 不记录学习时长
- (void)uploadStudyEnd:(uintID)contentId;

//视频播放记录上报
- (void)updateVideoRecord:(uintID)contentId WithVideo:(uintID)videoId WithLastTime:(NSUInteger)lastTime;


@end

NS_ASSUME_NONNULL_END
