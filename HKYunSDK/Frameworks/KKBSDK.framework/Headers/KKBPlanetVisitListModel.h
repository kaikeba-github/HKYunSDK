//
//  KKBPlanetVisitListModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/10/30.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"
#import "KKBGalaxyModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface KKBPlanetVisitModel : KKBPlanetModel

@property (nonatomic, copy) NSDate *updatedAt;

@end

@interface KKBPlanetVisitListModel : KKBBaseModel

@property (nonatomic, assign) NSInteger total;
@property (nonatomic, assign) NSInteger page;
@property (nonatomic, assign) BOOL isMore; // 是否还有下一页数据 1、有 0、没有
@property (nonatomic, copy) NSArray<KKBPlanetVisitModel *> *list;

@end

NS_ASSUME_NONNULL_END
