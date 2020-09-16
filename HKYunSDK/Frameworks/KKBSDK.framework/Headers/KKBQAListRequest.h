//
//  KKBQAListRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/8/6.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"
#import "KKBQAModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBQAListRequestType) {
    KKBQAListRequestType_All = 0, // 全部
    KKBQAListRequestType_MyQuestion = 1, //  我的提问
    KKBQAListRequestType_MyAnswer = 2, // 我的回答(app)
//    KKBQAListRequestType_MyAnswer_Web = 3, // 我的回答(web)
};

@interface KKBQAListRequest : KKBLearningCenterRequest

- (instancetype)initWithType:(KKBQAListRequestType)type qaType:(KKBQAType)qaType page:(NSInteger)page courseId:(intID)courseId chapterId:(intID)chapterId sectionId:(intID)sectionId;

@end

NS_ASSUME_NONNULL_END
