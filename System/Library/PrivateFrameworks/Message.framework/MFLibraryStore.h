/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <Message/MFMailMessageStore.h>

@class MFMessageLibrary, NSDate, MFMessageCriterion;

@interface MFLibraryStore : MFMailMessageStore {

	MFMessageLibrary* _library;
	NSDate* _earliestReceivedDate;
	MFMessageCriterion* _criterion;
	unsigned long long _serverMessageCount;
	unsigned long long _fetchWindow;

}

@property (nonatomic,retain) NSDate * earliestReceivedDate;              //@synthesize earliestReceivedDate=_earliestReceivedDate - In the implementation block
+(id)sharedInstance;
+(BOOL)createEmptyStoreForPath:(id)arg1 ;
+(BOOL)storeAtPathIsWritable:(id)arg1 ;
+(id)storeWithMailbox:(id)arg1 ;
+(id)sharedInstanceIfExists;
+(unsigned)defaultLoadOptions;
+(id)storeWithCriterion:(id)arg1 ;
-(void)dealloc;
-(id)URLString;
-(void)openSynchronously;
-(void)messagesWereAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(unsigned long long)nonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(unsigned long long)serverUnreadOnlyOnServerCount;
-(unsigned long long)unreadCount;
-(unsigned long long)allNonDeletedCountIncludingServerSearch:(BOOL)arg1 andThreadSearch:(BOOL)arg2 ;
-(unsigned long long)fetchWindow;
-(id)copyOfAllMessagesWithOptions:(unsigned)arg1 ;
-(id)copyOfAllMessages;
-(id)copyMessagesMatchingText:(id)arg1 options:(unsigned)arg2 ;
-(void)deleteMessages:(id)arg1 moveToTrash:(BOOL)arg2 ;
-(id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(unsigned long long)appendMessages:(id)arg1 unsuccessfulOnes:(id)arg2 newMessageIDs:(id)arg3 newMessages:(id)arg4 flagsToSet:(id)arg5 ;
-(id)messageForMessageID:(id)arg1 options:(unsigned)arg2 ;
-(id)_cachedHeaderDataForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(id)_fetchHeaderDataForMessage:(id)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg1 ;
-(void)setNumberOfAttachments:(unsigned)arg1 isSigned:(BOOL)arg2 isEncrypted:(BOOL)arg3 forMessage:(id)arg4 ;
-(id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2 ;
-(void)writeUpdatedMessageDataToDisk;
-(BOOL)shouldGrowFetchWindow;
-(void)invalidateFetchWindow;
-(unsigned long long)growFetchWindow;
-(void)purgeMessagesBeyondLimit:(unsigned long long)arg1 keepingMessage:(id)arg2 ;
-(unsigned long long)unreadCountMatchingCriterion:(id)arg1 ;
-(BOOL)hasMessageForAccount:(id)arg1 ;
-(unsigned long long)indexOfMessage:(id)arg1 ;
-(id)mutableCopyOfAllMessages;
-(id)copyOfAllMessagesForBodyLoadingFromRowID:(unsigned)arg1 limit:(unsigned)arg2 ;
-(id)copyMessagesMatchingCriterion:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 ;
-(id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned)arg2 inMailbox:(id)arg3 ;
-(BOOL)canCompact;
-(void)doCompact;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg1 compact:(BOOL)arg2 ;
-(BOOL)allowsAppend;
-(id)setFlagsLocallyFromDictionary:(id)arg1 forMessages:(id)arg2 ;
-(id)storeData:(id)arg1 forMimePart:(id)arg2 isComplete:(BOOL)arg3 ;
-(id)initWithMailbox:(id)arg1 ;
-(id)criterion;
-(id)mailbox;
-(id)dataPathForMessage:(id)arg1 part:(id)arg2 ;
-(id)initWithCriterion:(id)arg1 mailbox:(id)arg2 readOnly:(BOOL)arg3 ;
-(id)initWithCriterion:(id)arg1 ;
-(void)_queueMessagesAdded:(id)arg1 ;
-(void)_queueMessageFlagsChanged:(id)arg1 ;
-(void)_queueMessagesWillBeCompacted:(id)arg1 ;
-(void)_queueMessagesWereCompacted:(id)arg1 ;
-(id)copyOfMessageInfos;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 generation:(unsigned long long*)arg3 ;
-(id)copyOfMessagesInRange:(NSRange)arg1 options:(unsigned)arg2 ;
-(void)addCountsForMessages:(id)arg1 shouldUpdateUnreadCount:(BOOL)arg2 ;
-(void)setEarliestReceivedDate:(NSDate *)arg1 ;
-(unsigned long long)_fetchWindowMultiple;
-(unsigned long long)_fetchWindowMinimum;
-(unsigned long long)_calculateFetchWindowWithAdditionalMultiple:(BOOL)arg1 ;
-(id)filterMessagesByMembership:(id)arg1 ;
-(void)_handleFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3 ;
-(id)_memberMessagesWithCompactionNotification:(id)arg1 ;
-(BOOL)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 withConsumer:(id)arg4 downloadIfNecessary:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 usePartDatas:(BOOL)arg5 didDownload:(BOOL*)arg6 ;
-(id)_cachedBodyDataContainerForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(BOOL)_fetchDataForMimePart:(id)arg1 range:(NSRange)arg2 isComplete:(BOOL*)arg3 consumer:(id)arg4 ;
-(id)dataForMimePart:(id)arg1 inRange:(NSRange)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)_copyDataFromMimePart:(id)arg1 threshold:(unsigned)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)_fetchFullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(BOOL*)arg4 ;
-(id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 downloadIfNecessary:(BOOL)arg3 partial:(BOOL*)arg4 ;
-(void)deleteBodyDataForMessage:(id)arg1 ;
-(void)compactMessages:(id)arg1 ;
-(id)_cachedHeadersForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(void)purgeMessages:(id)arg1 ;
-(void)handleMessagesAdded:(id)arg1 earliestReceivedDate:(id)arg2 ;
-(void)_addInvocationToQueue:(id)arg1 ;
-(void)handleMessageFlagsChanged:(id)arg1 ;
-(void)handleMessagesWillBeCompacted:(id)arg1 ;
-(void)handleMessagesCompacted:(id)arg1 ;
-(BOOL)hasCompleteDataForMimePart:(id)arg1 ;
-(id)messageWithLibraryID:(unsigned)arg1 options:(unsigned)arg2 ;
-(id)copyOfMessageInfosMatchingCriterion:(id)arg1 ;
-(id)copyOfMessageInfosForConversationsContainingMessagesMatchingCriterion:(id)arg1 ;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)arg1 limit:(long long)arg2 ;
-(long long)oldestKnownConversation;
-(id)oldestKnownMessage;
-(id)serverSearchResults;
-(id)dateOfOldestNonIndexedNonSearchResultMessage;
-(id)dateOfNewestNonSearchResultMessage;
-(void)willFetchMessages;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id*)arg2 isComplete:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(BOOL*)arg5 ;
-(id)bodyDataForMessage:(id)arg1 isComplete:(BOOL*)arg2 isPartial:(BOOL*)arg3 downloadIfNecessary:(BOOL)arg4 ;
-(void)updateUserInfoToLatestValues;
-(void)_setNeedsAutosave;
-(id)newObjectCache;
-(id)_cachedBodyForMessage:(id)arg1 valueIfNotPresent:(id)arg2 ;
-(NSDate *)earliestReceivedDate;
-(id)library;
-(void)setLibrary:(id)arg1 ;
-(void)updateMetadata;
-(unsigned long long)totalCount;
-(BOOL)shouldCancel;
@end

