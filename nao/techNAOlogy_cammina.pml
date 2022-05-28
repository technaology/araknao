<?xml version="1.0" encoding="UTF-8" ?>
<Package name="techNAOlogy_cammina" format_version="5">
    <Manifest src="manifest.xml" />
    <BehaviorDescriptions>
        <BehaviorDescription name="behavior" src="behavior_1" xar="behavior.xar" />
    </BehaviorDescriptions>
    <Dialogs>
        <Dialog name="opera80" src="opera80/opera80.dlg" />
        <Dialog name="opera84" src="opera84/opera84.dlg" />
    </Dialogs>
    <Resources>
        <File name="choice_sentences" src="behavior_1/Aldebaran/choice_sentences.xml" />
    </Resources>
    <Topics>
        <Topic name="opera80_iti" src="opera80/opera80_iti.top" topicName="opera80" language="it_IT" nuance="iti" />
        <Topic name="opera84_iti" src="opera84/opera84_iti.top" topicName="opera84" language="it_IT" nuance="iti" />
    </Topics>
    <IgnoredPaths />
    <Translations auto-fill="en_US">
        <Translation name="translation_en_US" src="translations/translation_en_US.ts" language="en_US" />
        <Translation name="translation_it_IT" src="translations/translation_it_IT.ts" language="it_IT" />
    </Translations>
</Package>
