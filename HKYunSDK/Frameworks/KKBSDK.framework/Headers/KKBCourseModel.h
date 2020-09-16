//
//  KKBCourseModel.h
//  KaiKeBa
//
//  Created by zddMac on 2019/4/19.
//  Copyright © 2019 kaikeba. All rights reserved.
//

#import <KKBSDK/KKBSDK.h>

typedef NS_ENUM(NSInteger, KKBCourseType) {
    KKBCourseType_None = 0,
    KKBCourseType_Vip = 1, // Vip课
    KKBCourseType_PlanetOpen = 2, // 星球公开课
    KKBCourseType_PlanetCourse = 3, // 微课
    KKBCourseType_Small = 4, // 小课
    KKBCourseType_Job = 5, // 就业课
    KKBCourseType_Interal = 6, // 内训
    KKBCourseType_Offline = 7, // 线下课
    KKBCourseType_OpenCourse = 8, // 普通公开课
    KKBCourseType_Experience = 9, // 体验课
};

typedef NS_ENUM(NSInteger, KKBCourseStatus) {
    KKBCourseStatus_Normal = 1,
    KKBCourseStatus_Expire = 2,
};

@interface KKBCourseModel : KKBBaseModel

@property (nonatomic, assign)uintID              course_id;
@property (nonatomic, strong)NSString            *course_name;
@property (nonatomic, strong)NSString            *cover_img_path_mobile;
@property (nonatomic, assign)uintID              school_id;
@property (nonatomic, strong)NSString            *school_name;
@property (nonatomic, assign)NSUInteger          status;
@property (nonatomic, assign)KKBCourseStatus     expired_status;
@property (nonatomic, assign)KKBCourseType       type;
@property (nonatomic, assign)uintID              industry_id;
@property (nonatomic, strong)NSString            *introduce_url;
@property (nonatomic, strong)NSString            *intro;
@property (nonatomic, assign)NSUInteger          chapter_count;
@property (nonatomic, assign)NSUInteger          section_count;
@property (nonatomic, assign)NSUInteger          progress;
@property (nonatomic, assign)BOOL                schedule_status;  //YES-课程更新完毕   NO-课程更新未完成
@property (nonatomic, assign)uintID              last_chapter_id;  //上次学习的章id
@property (nonatomic, assign)NSUInteger          last_chapter_rank_num;  //上次学习到第n章
@property (nonatomic, assign)uintID              last_section_id;  //上次学习的节id
@property (nonatomic, assign)NSUInteger          last_section_rank_num;  //上次学习的第n节
@property (nonatomic, assign)uintID              last_content_id;   //上次学习的内容id
@property (nonatomic, assign)NSUInteger          last_content_rank_num;  //上次学习到第n个内容
@property (nonatomic, assign)NSUInteger          study_time; //学习时长
@property (nonatomic, assign)BOOL                is_open_thread; // 0、未开启课程问答 1、已开启课程问答
@property (nonatomic, assign)NSUInteger          total_course_question_count; //课程全部问题数
@property (nonatomic, assign)NSUInteger          total_self_question_count; //课程当前用户提问数
@property (nonatomic, assign)NSUInteger          total_self_answer_count; //课程当前用户回答数
@property (nonatomic, assign)BOOL                has_experiment; // true or false
@property (nonatomic, assign)uintID              experiment_id; // 13,//实验id
@property (nonatomic, strong)NSString            *h5_experiment_detail; // 'http://xxx?xx'//h5跳转链接

@property (nonatomic, strong)NSMutableArray<KKBChapterModel *> *chapter_list;

@end

