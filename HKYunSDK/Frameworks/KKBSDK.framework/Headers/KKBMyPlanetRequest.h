//
//  KKBMyPlanetsRequest.h
//  KaiKeBa
//
//  Created by Duane on 2019/10/28.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"
#import "KKBMyPlanetModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBMyPlanetRequest : KKBLearningCenterRequest

- (instancetype)initWithPage:(NSInteger)page;

@end

NS_ASSUME_NONNULL_END
