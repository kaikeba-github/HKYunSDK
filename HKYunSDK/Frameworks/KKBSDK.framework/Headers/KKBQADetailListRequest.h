//
//  KKBQADetailListRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/8/9.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBQADetailListRequest : KKBLearningCenterRequest

- (instancetype)initWithThreadId:(intID)threadId page:(NSInteger)page;

@end

NS_ASSUME_NONNULL_END
