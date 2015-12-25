//
//  HLTheme.h
//  HotlineSDK
//
//  Created by Aravinth Chandran on 30/09/15.
//  Copyright © 2015 Freshdesk. All rights reserved.
//

#import <UIKit/UIKit.h>

#define IMAGE_SEARCH_ICON @"Search"
#define IMAGE_CONTACT_US_ICON @"ContactUsIcon"
#define IMAGE_BACK_BUTTON @"BackButton"
#define IMAGE_ATTACH_ICON @"AttachmentUpload"
#define IMAGE_BUBBLE_CELL_LEFT @"BubbleLeft"
#define IMAGE_BUBBLE_CELL_RIGHT @"BubbleRight"
#define IMAGE_AUDIO_TOOLBAR_CANCEL @"AudioToolbarCancel"
#define IMAGE_INPUT_TOOLBAR_MIC @"Mic"
#define IMAGE_SEND_ICON @"Send"
#define IMAGE_MESSAGE_SENDING_ICON @"MessageSending"
#define IMAGE_MESSAGE_SENT_ICON @"MessageSent"
#define IMAGE_PLACEHOLDER @"ImagePlaceholder"
#define IMAGE_AVATAR_USER @"UserAvatarImage"
#define IMAGE_AVATAR_AGENT @"AgentAvatarImage"
#define IMAGE_AUDIO_PLAY_BUTTON @"AudioMessagePlayButton"
#define IMAGE_AUDIO_STOP_BUTTON @"AudioMessageStopButton"
#define IMAGE_AUDIO_PROGRESS_BAR_MIN @"AudioProgessBarMin"
#define IMAGE_AUDIO_PROGRESS_BAR_MAX @"AudioProgessBarMax"
#define IMAGE_TABLEVIEW_ACCESSORY_ICON @"TableViewAccessoryIcon"
#define IMAGE_LOADING_ICON

@interface HLTheme : NSObject

+ (instancetype)sharedInstance;
-(UIColor *)searchBarInnerBackgroundColor;
-(UIColor *)gridViewItemBackgroundColor;
+(UIColor *)colorWithHex:(NSString *)value;

//Search Bar
-(UIFont *)searchBarFont;
-(UIFont *)searchBarCancelButtonFont;
-(UIColor *)searchBarFontColor;
-(UIColor *)searchBarOuterBackgroundColor;
-(UIColor *)searchBarCancelButtonColor;
-(UIColor *)searchBarCursorColor;

//Table View
-(UIFont *)tableViewCellFont;
-(UIColor *)tableViewCellFontColor;
-(UIFont *)tableViewCellTitleFont;
-(UIColor *)tableViewCellTitleFontColor;
-(UIFont *)tableViewCellDetailFont;
-(UIColor *)tableViewCellDetailFontColor;
-(UIColor *)tableViewCellBackgroundColor;
-(UIColor *)tableViewCellImageBackgroundColor;
-(UIColor *)tableViewCellSeparatorColor;
-(UIColor *)timeDetailTextColor;
-(UIFont *)conversationsTimeDetailFont;

//Table View Section
-(UIFont *)tableViewSectionHeaderFont;
-(UIColor *)tableViewSectionHeaderFontColor;
-(UIColor *)tableViewSectionHeaderBackgroundColor;
-(CGFloat)tableViewSectionHeaderHeight;

//Overall SDK
-(UIColor *)backgroundColorSDK;
-(UIColor *)badgeButtonBackgroundColor;
-(UIColor *)badgeButtonTitleColor;
-(UIColor *)noItemsFoundMessageColor;

//Talk to us button
-(UIFont *)talkToUsButtonFont;
-(UIColor *)talkToUsButtonColor;

//Dialogues
-(UIColor *)getButtontextColorForKey:(NSString *)key;
-(UIFont *)dialogueTitleFont;
-(UIColor *)dialogueTitleTextColor;
-(UIFont *)dialogueYesButtonFont;
-(UIColor *)dialogueYesButtonTextColor;
-(UIColor *)dialogueYesButtonBackgroundColor;
-(UIColor *)dialogueNoButtonBorderColor;
-(UIColor *)dialogueYesButtonBorderColor;
-(UIColor *)dialogueNoButtonBackgroundColor;
-(UIFont *)dialogueNoButtonFont;
-(UIColor *)dialogueNoButtonTextColor;
-(UIColor *)dialogueBackgroundColor;

//NavigationBar
-(UIColor *)navigationBarBackgroundColor;
-(UIFont *)navigationBarTitleFont;
-(UIColor *)navigationBarFontColor;

//Messagecell & Conversation UI
-(UIColor *)inputTextFontColor;
-(UIColor *)sendButtonColor;
-(UIColor *)conversationViewTitleTextColor;
-(UIColor *)conversationViewBackgroundColor;
-(UIColor *)actionButtonTextColor;
-(UIColor *)actionButtonColor;
-(UIColor *)businessMessageTextColor;
-(UIColor *)userMessageTextColor;
-(UIColor *)hyperlinkColor;
-(BOOL)alwaysPollForMessages;
-(BOOL)showsBusinessProfileImage;
-(BOOL)showsUserProfileImage;
-(BOOL)showsBusinessMessageSenderName;
-(BOOL)showsUserMessageSenderName;
-(NSString *)textInputHintText;
-(NSString *)businessProfileImageName;
-(NSString *)userProfileImageName;
-(NSString *)businessMessageSenderName;
-(NSString *)userMessageSenderName;
-(NSString *)businessChatBubbleImageName;
-(NSString *)userChatBubbleImageName;
-(NSString *)chatBubbleFontName;
-(NSString *)conversationUIFontName;
-(float)chatBubbleFontSize;
-(int)pollingTimeChatInFocus;
-(int)pollingTimeChatNotInFocus;


//Grid View

-(UIColor *)itemBackgroundColor;
-(UIColor *)itemSeparatorColor;
-(UIFont *)contactUsFont;
-(UIColor *)contactUsFontColor;

//Grid View Cell
-(UIFont *)categoryTitleFont;
-(UIColor *)categoryTitleFontColor;
-(UIColor *)imageViewItemBackgroundColor;

//Conversation List View
-(UIColor *)conversationListViewBackgroundColor;
-(UIFont *)channelTitleFont;
-(UIColor *)channelTitleFontColor;
-(UIFont *)channelDescriptionFontl;
-(UIColor *)channelDescriptionFontColor;
-(UIFont *)lastUpdatedFont;
-(UIColor *)lastUpdatedFontColor;

//Voice Recording Prompt
-(UIFont *)voiceRecordingTimeLabelFont;

-(UIImage *)getImageWithKey:(NSString *)key;

@end