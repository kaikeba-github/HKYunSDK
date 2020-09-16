//
//  KKBGalaxyModel.h
//  KaiKeBa
//
//  Created by Duane on 2019/10/25.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import "KKBBaseModel.h"

@class KKBStarDomainModel;
@class KKBOrbitModel;
@class KKBGalaxyPlanetModel;
@class KKBPlanetInfoModel;
@class KKBPlanetMapModel;

typedef NS_ENUM(NSInteger, KKBPlanetOwnerStatus) {
    KKBPlanetOwnerStatus_Normal = 0,
    KKBPlanetOwnerStatus_Testing,
    KKBPlanetOwnerStatus_Passed,
};

NS_ASSUME_NONNULL_BEGIN

@interface KKBGalaxyModel : KKBBaseModel

@property (nonatomic, assign) uintID galaxyId;
@property (nonatomic, assign) uintID schoolId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSInteger nodeCnt;
@property (nonatomic, assign) NSInteger layerCnt;
@property (nonatomic, assign) NSInteger groupCnt;
@property (nonatomic, assign) BOOL vipPrivilege;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, copy) NSString *sellPoint;
@property (nonatomic, copy) NSArray<KKBOrbitModel *> *layerList;
@property (nonatomic, copy) NSArray<KKBStarDomainModel *> *groupList;
@property (nonatomic, copy) NSArray<KKBPlanetMapModel *> *nodeMap;

+ (NSString *)galaxyImageOf:(uintID)galaxId;
- (NSString *)galaxyImage;
- (NSString *)galaxyIconImage;

- (KKBGalaxyPlanetModel *)planetModelWithNodeId:(uintID)nodeId;
- (KKBOrbitModel *)orbitModelWithLayerId:(uintID)layoutId;

- (void)refreshState;

@end

@interface KKBStarDomainModel : KKBBaseModel

@property (nonatomic, assign) uintID nodeGroupId;
@property (nonatomic, assign) uintID galaxyId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSInteger nodeCnt;
@property (nonatomic, assign) NSInteger sortIdx;
@property (nonatomic, copy) NSArray<NSNumber *> *nodeIdList;

@end

@interface KKBOrbitModel : KKBBaseModel

@property (nonatomic, assign) uintID layerId;
@property (nonatomic, assign) uintID galaxyId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) NSInteger nodeCnt;
@property (nonatomic, assign) NSInteger sortIdx;
@property (nonatomic, copy) NSArray<KKBGalaxyPlanetModel *> *nodeList;

@end

@interface KKBPlanetInfoModel : KKBBaseModel

@property (nonatomic, assign) uintID nodeId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) uintID schoolId;
@property (nonatomic, copy) NSString *webCoverImgPath;
@property (nonatomic, copy) NSString *mobileCoverImgPath;
@property (nonatomic, assign) BOOL isBuild; // Yes：星球建设中 No:建设完成
@property (nonatomic, strong) NSString *sellPoint; //卖点

@property (nonatomic, assign) uintID editorUid;
@property (nonatomic, assign) uintID creatorUid;
@property (nonatomic, copy) NSDate *updatedAt;
@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic, assign) NSInteger status;
@property (nonatomic, assign) BOOL askSwitch;

@end

@interface KKBPlanetModel : KKBBaseModel

@property (nonatomic, assign) uintID nodeId;
@property (nonatomic, assign) uintID galaxyId;
@property (nonatomic, strong) KKBPlanetInfoModel *nodeInfo;
@property (nonatomic, assign) KKBPlanetOwnerStatus userOwnerStatus;

- (NSString *)planetImage;
- (NSString *)myPlanetImage;

@end

@interface KKBGalaxyPlanetModel : KKBPlanetModel

@property (nonatomic, assign) uintID ID;
@property (nonatomic, assign) uintID layerId;
@property (nonatomic, assign) NSInteger sortIdx;

@end

@interface KKBPlanetMapModel : KKBBaseModel

@property (nonatomic, assign) uintID nodeId;
@property (nonatomic, copy) NSArray<NSNumber *> *mapNodeId;

@end

NS_ASSUME_NONNULL_END
