#define ACTION(cls) \
class Action cls (Action): \
 \
	def name(self) -> Text:	return "action_"cls \
 \
	def run(self, dispatcher: CollectingDispatcher, tracker: Tracker, domain: Dict[Text, Any]) -> List[Dict[Text, Any]]: \
 \
	return []


ACTION(example)

