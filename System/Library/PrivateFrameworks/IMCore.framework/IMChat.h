/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMItemsController.h>
#import <IMCore/IMSendProgressDelegate.h>

@protocol IMChatItemRules;
@class NSString, IMAccount, NSArray, NSMutableDictionary, IMMessage, NSMutableArray, NSMutableSet, NSNumber, IMTimingCollection, IMScheduledUpdater, IMSendProgress, NSSet, IMChatRegistry, NSDate, IMHandle;

@interface IMChat : IMItemsController <IMSendProgressDelegate> {

	NSString* _guid;
	NSString* _typingGUID;
	NSString* _localUserIsComposing;
	NSString* _currentLocationGUID;
	NSString* _identifier;
	IMAccount* _account;
	NSString* _displayName;
	NSString* _roomName;
	NSString* _roomNameWithoutSuffix;
	NSString* _lastAddressedHandleID;
	NSString* _groupID;
	NSArray* _participants;
	NSMutableDictionary* _participantStates;
	IMMessage* _invitationForPendingParticipants;
	NSMutableArray* _messagesPendingJoin;
	NSMutableSet* _guids;
	NSMutableDictionary* _chatProperties;
	NSMutableDictionary* _participantProperties;
	NSArray* _frequentReplies;
	NSArray* _attachments;
	NSNumber* _countOfMessagesMarkedAsSpam;
	IMTimingCollection* _timingCollection;
	id<IMChatItemRules> _chatItemRules;
	IMScheduledUpdater* _chatItemsUpdater;
	IMSendProgress* _sendProgress;
	char _downgradeState;
	IMScheduledUpdater* _downgradeStateUpdater;
	long long _joinState;
	unsigned char _style;
	unsigned long long _dbFailedCount;
	unsigned long long _dbUnreadCount;
	void* _context;
	unsigned _hasBeenConfigured : 1;
	unsigned _isFirstMessageInvitation : 1;
	unsigned _wasInvitationHandled : 1;
	unsigned _didSendAFinishedMessage : 1;
	unsigned _hasPendingMarkRead : 1;
	unsigned _isUpdatingChatItems : 1;
	unsigned _ignoreDowngradeStatusUpdates : 1;
	unsigned _isFiltered : 1;
	unsigned _forceMMS : 1;
	BOOL _hasRefreshedServiceForSending;
	BOOL _hasHadSuccessfulQuery;
	NSString* _currentUnreadHistoryQuery;
	double _latestTypingIndicatorTimeInterval;

}

@property (nonatomic,readonly) BOOL suppressAccountRetargetingForNamedGroupConversation; 
@property (assign,nonatomic) BOOL forceMMS; 
@property (assign,nonatomic) unsigned long long numberOfMessagesToKeepLoaded; 
@property (nonatomic,readonly) BOOL hasMoreMessagesToLoad; 
@property (nonatomic,copy,readonly) NSArray * attachments; 
@property (nonatomic,readonly) NSSet * fmfHandles; 
@property (nonatomic,readonly) NSSet * allSiblingFMFHandles; 
@property (nonatomic,readonly) BOOL hasRecipientsFollowingLocation; 
@property (nonatomic,readonly) BOOL hasSiblingRecipientsSharingLocation; 
@property (nonatomic,readonly) BOOL allRecipientsFollowingLocation; 
@property (nonatomic,readonly) BOOL hasRecipientsSharingLocation; 
@property (nonatomic,readonly) BOOL allRecipientsSharingLocation; 
@property (nonatomic,readonly) IMChatRegistry * chatRegistry; 
@property (setter=_setGUIDs:,nonatomic,retain) NSMutableSet * _guids;                                 //@synthesize guids=_guids - In the implementation block
@property (assign,nonatomic) double latestTypingIndicatorTimeInterval;                                //@synthesize latestTypingIndicatorTimeInterval=_latestTypingIndicatorTimeInterval - In the implementation block
@property (nonatomic,readonly) BOOL _shouldRegisterChat; 
@property (nonatomic,readonly) NSString * lastAddressedHandleID;                                      //@synthesize lastAddressedHandleID=_lastAddressedHandleID - In the implementation block
@property (nonatomic,retain) NSString * groupID;                                                      //@synthesize groupID=_groupID - In the implementation block
@property (assign,nonatomic) void* contextInfo;                                                       //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) BOOL hasHadSuccessfulQuery; 
@property (nonatomic,readonly) NSString * guid;                                                       //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) IMAccount * account;                                                   //@synthesize account=_account - In the implementation block
@property (nonatomic,readonly) unsigned char chatStyle;                                               //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) NSString * chatIdentifier; 
@property (nonatomic,readonly) NSString * persistentID; 
@property (nonatomic,readonly) unsigned long long messageCount; 
@property (nonatomic,readonly) unsigned long long unreadMessageCount; 
@property (nonatomic,readonly) unsigned long long messageFailureCount; 
@property (nonatomic,readonly) BOOL canLeaveChat; 
@property (nonatomic,readonly) BOOL canHaveMultipleParticipants; 
@property (nonatomic,readonly) unsigned long long overallChatStatus; 
@property (nonatomic,retain) NSString * displayName;                                                  //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,readonly) NSString * roomName;                                                   //@synthesize roomName=_roomName - In the implementation block
@property (nonatomic,readonly) NSString * roomNameWithoutSuffix; 
@property (nonatomic,retain) NSArray * frequentReplies;                                               //@synthesize frequentReplies=_frequentReplies - In the implementation block
@property (nonatomic,readonly) long long joinState;                                                   //@synthesize joinState=_joinState - In the implementation block
@property (nonatomic,readonly) BOOL hasUnhandledInvitation; 
@property (assign,nonatomic) BOOL localUserIsTyping; 
@property (assign,nonatomic) BOOL localUserIsRecording; 
@property (nonatomic,retain) NSString * localUserIsComposing; 
@property (nonatomic,readonly) NSString * localTypingMessageGUID; 
@property (nonatomic,readonly) IMMessage * lastMessage; 
@property (nonatomic,readonly) IMMessage * lastFinishedMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessage; 
@property (nonatomic,readonly) IMMessage * lastIncomingFinishedMessageWithTextContent; 
@property (nonatomic,readonly) NSDate * lastFinishedMessageDate; 
@property (nonatomic,readonly) long long lastFinishedMessageID; 
@property (nonatomic,readonly) NSDate * lastSentMessageDate; 
@property (assign,nonatomic) BOOL isFiltered; 
@property (nonatomic,readonly) NSArray * participants;                                                //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) IMHandle * recipient; 
@property (nonatomic,retain) IMMessage * invitationForPendingParticipants;                            //@synthesize invitationForPendingParticipants=_invitationForPendingParticipants - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)__im_adjustMessageSummaryInfoForSending:(id)arg1 ;
+(void)_initializeFMF;
+(void)setChatItemRulesClass:(Class)arg1 ;
+(Class)chatItemRulesClass;
-(void)sendMessage:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(unsigned long long)messageCount;
-(void)clear;
-(void)remove;
-(NSString *)displayName;
-(NSArray *)attachments;
-(void)leave;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)chatIdentifier;
-(IMHandle *)recipient;
-(void)setRecipient:(IMHandle *)arg1 ;
-(NSSet *)fmfHandles;
-(void)stopSharingLocation;
-(NSArray *)participants;
-(NSString *)persistentID;
-(NSString *)groupID;
-(BOOL)suppressAccountRetargetingForNamedGroupConversation;
-(void)_targetToService:(id)arg1 newComposition:(BOOL)arg2 ;
-(void)_invalidateDowngradeState;
-(void)setHasHadSuccessfulQuery:(BOOL)arg1 ;
-(BOOL)isDowngraded;
-(BOOL)forceMMS;
-(NSString *)lastAddressedHandleID;
-(void)_setAndIncrementDowngradeMarkersForManual:(BOOL)arg1 ;
-(BOOL)sendDowngradeNotificationTo:(id)arg1 ;
-(unsigned char)chatStyle;
-(BOOL)_accountIsOperational:(id)arg1 forService:(id)arg2 ;
-(id)valueForChatProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forChatProperty:(id)arg2 ;
-(BOOL)_chatHasValidAccount:(id)arg1 forService:(id)arg2 ;
-(id)_previousAccountForService:(id)arg1 ;
-(void)_setPreviousAccount:(id)arg1 forService:(id)arg2 ;
-(void)_setAccount:(id)arg1 ;
-(void)_calculateDowngradeState;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(void)_calculateDowngradeStateTimerFired;
-(id)_consecutiveDowngradeAttemptsViaManualDowngrades:(BOOL)arg1 ;
-(void)_updateDowngradeState:(char)arg1 checkAgainInterval:(double)arg2 ;
-(void)_clearDowngradeMarkers;
-(BOOL)hasHadSuccessfulQuery;
-(void)refreshServiceForSending;
-(void)sendDowngradePingForMessage:(id)arg1 manualDowngrade:(BOOL)arg2 ;
-(void)_handleDeliveredCommand:(id)arg1 ;
-(void)_handleIncomingCommand:(id)arg1 ;
-(void)_delayedInvalidateDowngradeState;
-(void)setForceMMS:(BOOL)arg1 ;
-(id)messageForGUID:(id)arg1 ;
-(BOOL)_handleIncomingItem:(id)arg1 ;
-(void)_markItemAsPlayed:(id)arg1 ;
-(void)_updateDisplayName:(id)arg1 ;
-(void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withMessageSummaryInfo:(id)arg3 ;
-(void)sendMessageAcknowledgment:(long long)arg1 forChatItem:(id)arg2 withAssociatedMessageInfo:(id)arg3 ;
-(id)messageAcknowledgmentSummaryForConversationListWithMessage:(id)arg1 ;
-(id)_initWithItems:(id)arg1 ;
-(void)_itemsDidChange:(id)arg1 ;
-(void)updateMessage:(id)arg1 ;
-(id)chatItems;
-(void)_accountLoggedOut:(id)arg1 ;
-(void)_daemonDied:(id)arg1 ;
-(void)_daemonAlive:(id)arg1 ;
-(void)_accountControllerUpdated:(id)arg1 ;
-(BOOL)canHaveMultipleParticipants;
-(void)_watchHandleStatusChangedForHandle:(id)arg1 ;
-(void)_updateChatItems;
-(void)_configureLocationShareItem:(id)arg1 ;
-(id)_initWithGUID:(id)arg1 account:(id)arg2 style:(unsigned char)arg3 roomName:(id)arg4 displayName:(id)arg5 items:(id)arg6 participants:(id)arg7 isFiltered:(BOOL)arg8 hasHadSuccessfulQuery:(BOOL)arg9 ;
-(void)_postNotification:(id)arg1 userInfo:(id)arg2 ;
-(unsigned long long)unreadMessageCount;
-(unsigned long long)messageFailureCount;
-(unsigned long long)numberOfMessagesToKeepLoaded;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 limit:(unsigned long long)arg5 ;
-(void)_setAccount:(id)arg1 locally:(BOOL)arg2 ;
-(void)_updateChatItemsWithReason:(id)arg1 block:(/*^block*/id)arg2 shouldPost:(BOOL)arg3 ;
-(id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(void)_setCountOfMessagesMarkedAsSpam:(id)arg1 ;
-(void)markAsAutoSpamReported;
-(BOOL)isFiltered;
-(void)setIsFiltered:(BOOL)arg1 ;
-(void)_updateChatItemsWithReason:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_postNotification:(id)arg1 userInfo:(id)arg2 shouldLog:(BOOL)arg3 ;
-(unsigned long long)stateForParticipant:(id)arg1 ;
-(BOOL)_isDuplicate:(id)arg1 ;
-(void)_updateLocationShareItemsForSender:(id)arg1 ;
-(void)_setJoinState:(long long)arg1 quietly:(BOOL)arg2 ;
-(void)_sendMessage:(id)arg1 adjustingSender:(BOOL)arg2 shouldQueue:(BOOL)arg3 ;
-(void)_setParticipantState:(unsigned long long)arg1 forHandle:(id)arg2 quietly:(BOOL)arg3 ;
-(id)_performQueryWithKey:(id)arg1 loadImmediately:(BOOL)arg2 block:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_handleAttributionChanged;
-(void)_clearCachedIdentifier;
-(void)_setDisplayName:(id)arg1 ;
-(long long)joinState;
-(void)_setJoinState:(long long)arg1 ;
-(void)join;
-(IMChatRegistry *)chatRegistry;
-(void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2 ;
-(void)_sendCurrentLocationMessageUsingLocationManager:(id)arg1 ;
-(double)latestTypingIndicatorTimeInterval;
-(void)_setLocalUserIsComposing:(id)arg1 suppliedGUID:(id)arg2 typingIndicatorData:(id)arg3 ;
-(void)setLatestTypingIndicatorTimeInterval:(double)arg1 ;
-(BOOL)_shouldSendCancelTypingIndicator;
-(void)setLocalUserIsComposing:(NSString *)arg1 ;
-(BOOL)canSendTransfer:(id)arg1 ;
-(void)__clearReadMessageCache;
-(void)markMessagesAsRead:(id)arg1 ;
-(void)_setTimerForReadMessageCache;
-(void)_clearUnreadCount;
-(id)allPropertiesOfParticipant:(id)arg1 ;
-(void)setRecipient:(id)arg1 locally:(BOOL)arg2 ;
-(void)_addParticipants:(id)arg1 withState:(unsigned long long)arg2 ;
-(void)_unwatchHandleStatusChangedForHandle:(id)arg1 ;
-(void)_setParticipantState:(unsigned long long)arg1 forHandles:(id)arg2 quietly:(BOOL)arg3 ;
-(BOOL)canAddParticipant:(id)arg1 ;
-(id)participantsWithState:(unsigned long long)arg1 ;
-(id)_pendingParticipants;
-(IMMessage *)invitationForPendingParticipants;
-(void)_inviteParticipants:(id)arg1 reason:(id)arg2 ;
-(void)setInvitationForPendingParticipants:(IMMessage *)arg1 ;
-(BOOL)_sanityCheckAccounts;
-(void)sendProgress:(id)arg1 progressDidChange:(float)arg2 sendingMessages:(id)arg3 sendCount:(unsigned long long)arg4 totalCount:(unsigned long long)arg5 finished:(BOOL)arg6 ;
-(void)_setupObservation;
-(BOOL)_shouldRegisterChat;
-(void)_setDBUnreadCount:(unsigned long long)arg1 ;
-(void)_setDBFailedCount:(unsigned long long)arg1 ;
-(BOOL)_shouldAnnouncePeopleJoin;
-(void)_insertHistoricalMessages:(id)arg1 queryID:(id)arg2 isRefresh:(BOOL)arg3 isHistoryQuery:(BOOL)arg4 ;
-(IMMessage *)lastFinishedMessage;
-(IMMessage *)lastIncomingMessage;
-(IMMessage *)lastIncomingFinishedMessage;
-(IMMessage *)lastIncomingFinishedMessageWithTextContent;
-(id)lastRelatedIncomingFinishedMessageTextContentWithLimit:(long long)arg1 ;
-(NSDate *)lastFinishedMessageDate;
-(NSDate *)lastSentMessageDate;
-(long long)lastFinishedMessageID;
-(BOOL)deleteAllHistory;
-(unsigned long long)markAsSpam;
-(void)autoReportSpam;
-(void)updateIsFiltered:(BOOL)arg1 ;
-(void)didUnregisterFromRegistry:(id)arg1 ;
-(void)_recomputeOverallChatStatusQuietly:(BOOL)arg1 ;
-(void)_handleHandleStatusChanged:(id)arg1 ;
-(id)_timingCollection;
-(void)_startTiming:(id)arg1 ;
-(void)_endTiming;
-(void)_handleMessageGUIDDeletions:(id)arg1 ;
-(void)_participant:(id)arg1 statusChanged:(int)arg2 ;
-(void)_showErrorMessage:(id)arg1 ;
-(void)endListeningToAttributionChanges;
-(void)beginListeningToAttributionChanges;
-(unsigned long long)overallChatStatus;
-(NSString *)roomNameWithoutSuffix;
-(BOOL)hasUnhandledInvitation;
-(void)declineInvitation;
-(void)cancelMessage:(id)arg1 ;
-(void)sendCurrentLocationMessage;
-(BOOL)localUserIsTyping;
-(BOOL)localUserIsRecording;
-(NSString *)localTypingMessageGUID;
-(void)setLocalUserIsComposing:(id)arg1 typingIndicatorData:(id)arg2 ;
-(NSString *)localUserIsComposing;
-(void)setLocalUserIsRecording:(BOOL)arg1 ;
-(BOOL)canSendCurrentLocationMessage;
-(BOOL)authorizedToSendCurrentLocationMessage;
-(void)updateMessage:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)markMessageAsRead:(id)arg1 ;
-(void)markAllMessagesAsRead;
-(void)_setChatProperties:(id)arg1 ;
-(id)allChatProperties;
-(void)userToggledReadReceiptSwitch:(BOOL)arg1 ;
-(id)valueForProperty:(id)arg1 ofParticipant:(id)arg2 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ofParticipant:(id)arg3 ;
-(BOOL)_hasCommunicatedOnService:(id)arg1 ;
-(BOOL)canLeaveChat;
-(BOOL)canAddParticipants:(id)arg1 ;
-(void)_invitePendingParticipants;
-(void)inviteParticipants:(id)arg1 reason:(id)arg2 ;
-(void)removeParticipants:(id)arg1 reason:(id)arg2 ;
-(void)addPendingParticipants:(id)arg1 ;
-(BOOL)hasStoredMessageWithGUID:(id)arg1 ;
-(id)_initWithDictionaryRepresentation:(id)arg1 items:(id)arg2 participantsHint:(id)arg3 accountHint:(id)arg4 ;
-(void)setSendProgressDelegate:(id)arg1 ;
-(id)sendProgressDelegate;
-(NSArray *)frequentReplies;
-(void)setFrequentReplies:(NSArray *)arg1 ;
-(void)setGroupID:(NSString *)arg1 ;
-(NSMutableSet *)_guids;
-(void)_setGUIDs:(id)arg1 ;
-(void*)contextInfo;
-(void)setContextInfo:(void*)arg1 ;
-(id)_privateInitWithAccount:(id)arg1 style:(unsigned char)arg2 roomName:(id)arg3 messages:(id)arg4 participants:(id)arg5 isFiltered:(BOOL)arg6 hasHadSuccessfulQuery:(BOOL)arg7 ;
-(id)loadMessagesUpToGUID:(id)arg1 date:(id)arg2 limit:(unsigned long long)arg3 loadImmediately:(BOOL)arg4 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 loadImmediately:(BOOL)arg3 ;
-(void)_setAttachments:(id)arg1 ;
-(void)deleteChatItems:(id)arg1 ;
-(void)setNumberOfMessagesToKeepLoaded:(unsigned long long)arg1 ;
-(BOOL)hasMoreMessagesToLoad;
-(id)loadMessagesUpToGUID:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)loadMessagesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(id)loadFrequentRepliesLimit:(unsigned long long)arg1 loadImmediately:(BOOL)arg2 ;
-(id)loadUnreadMessagesWithLimit:(unsigned long long)arg1 fallbackToMessagesUpToGUID:(id)arg2 ;
-(void)loadAttachments:(/*^block*/id)arg1 ;
-(void)deleteTransfers:(id)arg1 ;
-(void)beginHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForKey:(id)arg1 ;
-(void)endHoldingUpdatesForAllKeys;
-(void)_replaceStaleChatItems;
-(void)updateChatItemsIfNeeded;
-(void)markChatItemAsSaved:(id)arg1 ;
-(void)markChatItemAsPlayed:(id)arg1 ;
-(void)markChatItemAsPlayedExpressiveSend:(id)arg1 ;
-(id)chatItemsForItems:(id)arg1 ;
-(void)markAllLocationShareItemsAsUnactionable;
-(NSSet *)allSiblingFMFHandles;
-(BOOL)hasRecipientsFollowingLocation;
-(BOOL)allRecipientsFollowingLocation;
-(BOOL)hasRecipientsSharingLocation;
-(BOOL)hasSiblingRecipientsSharingLocation;
-(BOOL)allRecipientsSharingLocation;
-(void)shareLocationUntilDate:(id)arg1 ;
-(void)startTrackingParticipantLocations;
-(void)stopTrackingParticipantLocations;
-(id)testChatItems;
-(BOOL)canEditChatItem:(id)arg1 ;
-(void)setRoomName:(NSString *)arg1 ;
-(NSString *)roomName;
-(IMAccount *)account;
-(void)_initialize;
-(BOOL)canSendMessage:(id)arg1 ;
-(void)acceptInvitation;
-(IMMessage *)lastMessage;
@end

