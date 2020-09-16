//
//  KKBPlanetVisitLlistRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/10/30.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"
#import "KKBPlanetVisitListModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetVisitLlistRequest : KKBLearningCenterRequest

- (instancetype)initWithPage:(NSInteger)page;
- (instancetype)initWithPage:(NSInteger)page count:(NSUInteger)count;

@end

NS_ASSUME_NONNULL_END
