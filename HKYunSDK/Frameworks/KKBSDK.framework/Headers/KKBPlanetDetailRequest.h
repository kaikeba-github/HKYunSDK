//
//  KKBPlanetDetailRequest.h
//  KaiKeBa
//
//  Created by zddMac on 2019/11/2.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBLearningCenterRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetDetailRequest : KKBLearningCenterRequest

- (instancetype)initWithNodeId:(uintID)nodeId WithGalaxy:(uintID)galaxyId;
@end

NS_ASSUME_NONNULL_END
