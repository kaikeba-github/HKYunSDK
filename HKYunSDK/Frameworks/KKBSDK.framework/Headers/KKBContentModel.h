//
//  KKBContentModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/4/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSInteger, KKBContentType) {
    KKBContentType_None = 0,       //未知内容类型
    KKBContentType_Living = 1,     //live直播
    KKBContentType_ClassIn = 2,    //ClassIn
    KKBContentType_CCVideo = 3,    //CC点播
    KKBContentType_HomeWork = 4,   //作业
    KKBContentType_Test = 5,       //测验
    KKBContentType_Material = 6,   //资料
    KKBContentType_Playback = 7, //直播回放
    KKBContentType_Laboratory = 8, //沙箱实验
    KKBContentType_InteractiveScript = 9, //互动剧本
    KKBContentType_InteractivePractice = 10, //互动练习
    KKBContentType_TES = 11, //评测
    KKBContentType_Offline = 12, //线下活动
    KKBContentType_PBL = 13, //小课PBL
    KKBContentType_CCLiveAndHkyIM = 14, //CCLive直播+HKY_IM
    KKBContentType_Questionnaire = 15, //问卷
    KKBContentType_HKYunLive = 16, //自研直播
    KKBContentType_InteractiveProgram = 17, //实景编程
    KKBContentType_ExplorationPractice = 18, //探索式互动练习
};

typedef NS_ENUM(NSInteger, KKBHomeworkStatus) {
    KKBHomeworkStatus_Normal = 1, // 1-未提交
    KKBHomeworkStatus_Submit = 2, // 2-已提交未批改
    KKBHomeworkStatus_Review = 3, // 3-已提交已批改
};

@interface KKBContentModel : KKBBaseModel

@property (nonatomic, assign)uintID           course_id;
@property (nonatomic, assign)uintID           chapter_id;
@property (nonatomic, assign)uintID           section_id;
@property (nonatomic, assign)uintID           group_id;
@property (nonatomic, assign)uintID           content_id;
@property (nonatomic, strong)NSString         *content_name;
@property (nonatomic, assign)NSUInteger       rank_num;
@property (nonatomic, assign)BOOL             is_locked;
@property (nonatomic, strong)NSString         *locked_desc;
@property (nonatomic, assign)NSUInteger       progress;        //学习进度
@property (nonatomic, assign)NSUInteger       study_time;      //学习时长
@property (nonatomic, assign)uintID           last_video_id;   //播放记录视频id
@property (nonatomic, assign)NSUInteger       last_time;       //上次播放位置
@property (nonatomic, assign)KKBContentType   content_type; //0-未知内容类型; 1-CC直播; 2-ClassIn; 3-CC点播; 4-作业; 5-测验; 6-资料; 7-CC直播回放; 8-沙箱实验; 9-互动脚本; 10-互动练习;
@property (nonatomic, assign)BOOL            playback_video_enabled; //回放支持点播形式展现，1启用，0禁用
@property (nonatomic, strong)NSArray<KKBResModel *> *res_list;


/*作业相关字段*/
@property (nonatomic, assign)KKBHomeworkStatus        homework_status; //作业状态：1-未提交、2-已提交未批改、3-已提交已批改
@property (nonatomic, assign)BOOL        is_homework_record; //是否有新的点评：0-没有、1-有
- (KKBVideoStatus)ccVideoContentStatus;

@end

NS_ASSUME_NONNULL_END
