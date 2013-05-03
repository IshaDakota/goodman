<?php
/**
 * @file
 * Pages for the Personal Narrative Badge Module
 *
 */

function goodman_planning_tool_page() {
  global $user;
  
  achievements_unlocked_already('step-1', $user->uid) ? 
    $step1_status = 'quest-achieved': $step1_status = 'quest-unachieved';
  achievements_unlocked_already('step-2', $user->uid) ? 
    $step2_status = 'quest-achieved': $step2_status = 'quest-unachieved';
  achievements_unlocked_already('step-3', $user->uid) ? 
    $step3_status = 'quest-achieved': $step3_status = 'quest-unachieved';
  achievements_unlocked_already('step-4', $user->uid) ? 
    $step4_status = 'quest-achieved': $step4_status = 'quest-unachieved';

    
  $output =  array(
    'badge_pic' => array(
      '#theme' => 'image_formatter',
      '#item' => array(
        'uri' => drupal_get_path('module', 'goodman_planning_tool') . '/images/goodman-badge.png',
        'alt' => 'Parker Palmer Headshot',
        'title' => 'Parker Palmer,'
        ),
      '#prefix' => '<div id="badge-image">',
      '#suffix' => '</div>',      
      ),
    
    'introduction' => array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('
        The Planning Tool helps GEs
        to ') . '<b>' . t('choose programs') . '</b>' . t(' for the summer and ') . 
        '<b>' . t('understand some of the challenges') . '</b>' . t(' they may
        face in implementation.') . '</p>
        <p><em>'. t('Each of the tool\'s four steps has three sections:') . '</em>
        <ol>
        <li><b>' . t('To Prepare: ') . '</b>' . t('Identify resources to which you should
          have access and questions you should be able to answer on the fly.') . '
        <li><b>' . t('Questions to Consider: ') . '</b>' . t('These may require some thought or
                  consultation with other camp staff or your faculty advisor.') . '
        <li><b>' . t('Moving Forward: ') . '</b>' . t('In this section, you will complete a worksheet with
                  to set out your plan for the summer. This worksheet
                  will be saved so that you can use it as you continue planning.') . '
        </ol>
        </p>',
    ),
    'the-steps' => array(
      '#type' => 'markup',
      '#markup' => '<h2>' . t('The Steps:') . '</h2>',
    ),
    'quest_list' => array(
      '#type' => 'markup',
      '#markup' => '<ul class = "quest-list">
        <li class = "' . $step1_status . '">' .
          l(t('Step One: Choose a Thematic Approach'), 'program-planning-tool/step-1') . '</li>
        <li class = "' . $step2_status . '">' .
          l(t('Step Two: Identify Settings and Resources'), 'program-planning-tool/step-2') . '</li>
        <li class = "' . $step3_status . '">' .
          l(t('Step Three: Define Your Audience'), 'program-planning-tool/step-3') . '</li>
        <li class = "' . $step4_status . '">' .
          l(t('Step Four: Select Programs & Manage Scope'), 'program-planning-tool/step-4') . '</li>
      </ul>',
    ),
    'intro_pic' => array(
      '#theme' => 'image_formatter',
      '#item' => array(
        'uri' => drupal_get_path('module', 'goodman_planning_tool') . '/images/planning-tool.png',
        'alt' => 'Parker Palmer Headshot',
        'title' => 'Parker Palmer,'
        ),
      '#prefix' => '<div id="intro-image">',
      '#suffix' => '</div>',      
      ),
    'conclusion' => array(
      '#type' => 'markup',
      '#markup' => '<div id="conclusion"><p>' . t('
        You do not need to finish all four steps at once -- it\'s probably 
        better to divide this work over several weeks, and
        one or two conversations with your faculty advisor. You may find
        that you have already done some of the work in this tool... that\'s great!
        Complete the worksheets in order, and use the "Questions to Consider"
        as a way to rethink some of your work.') . '</p>
        <p>' . t('Your progress will be on the list above and in
        your user profile under ') . l(t('Achievements'), 'user/' .
        $user->uid .'/achievements') . t('. You will also be able to see
        your answers to the "Moving Forward" worksheets in your user profile
        under ') . l(t('Planning Tool'), 'user/' . $user->uid . '/planning-tool') .
        t('. Initiative faculty and staff will be able to
        see this as well.') . '</p></div>',
    ),
    'more-info' => array(
      '#type' => 'markup',
      '#markup' => '<div id="more-info"><p>' . t('
        Below, you can find the presentation from the Israel Seminar (Shefayim)
        used to introduce the planning tool.') . '</p></div>',
    ),
    'prezi' => array(
      '#type' => 'markup',
      '#markup' => '<div id="prezi">
      <iframe src="http://prezi.com/embed/b5p1xzall2kh/?bgcolor=ffffff&amp;lock_to_path=0&amp;autoplay=0&amp;autohide_ctrls=0&amp;features=undefined&amp;disabled_features=undefined" width="550" height="400" frameBorder="0"></iframe>
      </div>',
      ),     
  );
    
  return $output;
}

function goodman_planning_tool_step1_page() {
  $output =  array(
    'introduction' => array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('Choose one of the themes of the initiative
        curriculum as your approach to content and programing this summer.
        This will be the theme that guides you in your selection of programs
        from the database, how you adapt these programs, and how you might
        rethink programming that already happens at camp.') . '</p>',
    ),
    'note' => array(
      '#type' => 'markup',
      '#markup' => '<h3 class="note-header">Note:</h3> 
        <div class="note-body"> ' . t('The thematic approach  should help you to organize 
        educational programming, not complicate it. As we
        discussed at the Israel Seminar, THEMES help us better organize our SUBJECTS, to
        more fully teach and express our VALUES. The Initiative themes - while
        specific to Modern Israel History - are broad enough to reflect many of the
        themes we already address at camp.') . '</div>',
      '#prefix' => '<div class="note">',
      '#suffix' => '</div>',
    ),
    'intro_pic' => array(
      '#theme' => 'image_formatter',
      '#item' => array(
        'uri' => drupal_get_path('module', 'goodman_planning_tool') . '/images/theme-subjects-values.png',
        'alt' => 'Themes, Subjects, and Values',
        'title' => 'Themes Subjects Values,'
        ),
      '#prefix' => '<div id="step1-image">',
      '#suffix' => '</div>',      
      ),    
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-1/to-prepare') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step1_prepare_page() {
  $output =  array(
    'note' => array(
      '#type' => 'markup',
      '#markup' => '<h3 class="note-header">Note:</h3> 
        <div class="note-body"> ' . t('If you haven\'t spent much time
        exploring the database of activities, this is a good time to
        start! Links below will organize content by themes, and will open
        in new windows so that you can keep your place in the tool.') . '</div>',
      '#prefix' => '<div class="note">',
      '#suffix' => '</div>',
    ),    
    'prepare-list' => array(
      '#items' => array(
        l(t('Review the Initiative themes'), 'themes-values', array('attributes' => array('target'=>'_blank'))) . t(' and reflect on them as they relate to you
          and your camp.'), 
        l(t('Sort the database by themes'), 'sort/theme', array('attributes' => array('target'=>'_blank'))) . t(' and browse the programs under each theme.'),
        t('Note that many programs appear under multiple themes.')
      ),
      '#theme' => 'item_list',
      '#prefix' => '<div class="checkbox-list">',
      '#suffix' => '</div>',
    ),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-1') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-1/to-consider') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step1_consider_page() {
  $output =  array(
    'note' => array(
      '#type' => 'markup',
      '#markup' => '<h3 class="note-header">Note:</h3> 
        <div class="note-body"> ' . t('It is important
        to consider these questions (and the others in this category) carefully,
        but don\'t get stuck on them. These questions are designed to help you
        consider issues, but should not be "process blockers."') . '</div>',
      '#prefix' => '<div class="note">',
      '#suffix' => '</div>',
    ),    
    'cosider-list' => array(
      '#items' => array(
        t('As you explore the themes, which resonate most strongly for your
          camp?'), 
        t('Are there themes that are similar to other thematic programs or
          offerings that exist in your camp?'),
        t('How might themes look different across age groups in
          camp?'),
        t('Could these themes work sequentially in your
          camp year after year? If so, how might you order a three-year plan?
          A five-year plan?'),
        t('Could multiple themes might work together
          during one summer? What might be the strengths and challenges of
          such an approach?'),        
      ),
    '#theme' => 'item_list',
    '#prefix' => '<div class="checkbox-list">',
    '#suffix' => '</div>',
    ),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-1/to-prepare') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-1/moving-forward') . '</div>',
    ),    
  );

  return $output;
}

function goodman_planning_tool_step1_forward_page() {
  $output =  array(
    'note' => array(
      '#type' => 'markup',
      '#markup' => '<h3 class="note-header">Note:</h3> 
        <div class="note-body"> ' . t('Your answers on this worksheet will be
        saved in your user profile under ') . l(t('Planning Tool'), 'user/' .
        $user->uid . '/planning-tool') .
        t('. Initiative faculty and staff will be able to
        see this.') . '</div>',
      '#suffix' => '</div>',
      '#prefix' => '<div class="note">',
    ),      
    'display_form' => drupal_get_form('goodman_planning_tool_step1_form'),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-1/to-consider') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
  );    
  return $output;
}


function goodman_planning_tool_step2_page() {
  $output =  array(
    'introduction' => array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('Find the camp settings (bunks, units,
        specialties, locations, etc.) where you plan to add or enhance Israel
        Education. In our first seminar, we engaged in several exercises that
        "mapped" Israel in your camps and explored areas that are fertile
        ground for creating and implementing Israel programming. These
        inventories will be helpful in identifying areas where you can both
        identify existing activities that you are already doing that will contribute to
        your thematic approach, and also find areas where you can create
        new programs easily.') . '</p>',
    ),
    //@todo FIX THIS
     'note' => array(
      '#type' => 'markup',
      '#markup' => '<h3 class="note-header">Note:</h3> 
        <div class="note-body"> ' . t('The purpose in this step is twofold:') . 
        '<ol><li>' . t('to help find more places in camp you can "inject" Israel (it will be easier
        to fulfill grant requirements)') . '</li>
        <li>' . t('to identify obstacles early so that you
        don\'t waste valuable time planning a program that just won\'t work.') . '</li></ol></div>',
      '#prefix' => '<div class="note">',
      '#suffix' => '</div>',
    ),
    'intro_pic' => array(
      '#theme' => 'image_formatter',
      '#item' => array(
        'uri' => drupal_get_path('module', 'goodman_planning_tool') . '/images/camp-settings.jpg',
        'alt' => 'Camp Settings',
        'title' => 'Camp Settings,'
        ),
      '#prefix' => '<div id="step2-image">',
      '#suffix' => '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-2/to-prepare') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step2_prepare_page() {
  $output =  array(
    'prepare-list' => array(
      '#items' => array(
        t('Revisit the mapping exercise that you did in the December Workshop
          (or last year) to remember where you mapped Israel in you camp. '), 
        t('Look in the database under your chosen theme and review the suggested
          settings for some of the activities.'),
        t('Create an inventory of  "tried and true" Israel programs that
          you already do at camp -- programs that you want to continue to
          do in the future.'),
      ),
      '#theme' => 'item_list',
      '#prefix' => '<div class="checkbox-list">',
      '#suffix' => '</div>',
    ),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-2') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-2/to-consider') . '</div>',
    ),
  );
  return $output;
}

function goodman_planning_tool_step2_consider_page() {
  $output =  array(
    'cosider-list' => array(
      '#items' => array(
        t('Where in our camp map do we find Israel?'), 
        t('In the mapping exercise, what areas did you identify as "fertile
          ground" for introducing programs?'),
        t('How might themes look differently across different age groups in
          camp?'),
        t('Where is really good Israel programming already taking place at
          camp?'),
        t('How can the theme(s) you chose work within those settings?'),        
      ),
    '#theme' => 'item_list',
    '#prefix' => '<div class="checkbox-list">',
    '#suffix' => '</div>',
    ),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-2/to-prepare') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-2/moving-forward') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step2_forward_page() {
  $output =  array(
    'display_form' => drupal_get_form('goodman_planning_tool_step2_form'),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-2/to-consider') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step3_page() {
  $output =  array(
    'introduction' => array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('The Initiative requires that all campers
        experience two hours of programming per week (except for the
        youngest campers, who must experience only one 
        hour per week). The goal of this requirement is to create
        a camp-wide approach to Israel education that is achievable within
        your camp framework.') . '</p>',
    ),
    'intro_pic' => array(
      '#theme' => 'image_formatter',
      '#item' => array(
        'uri' => drupal_get_path('module', 'goodman_planning_tool') . '/images/define-target-audience.jpg',
        'alt' => 'Define Your Audience',
        'title' => 'Define Your Audience,'
        ),
      '#prefix' => '<div id="step3-image">',
      '#suffix' => '</div>',
    ),    
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-3/to-prepare') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step3_prepare_page() {
  $output =  array(
    'prepare-list' => array(
      '#items' => array(
        t('Evaluate the ' . l(t('"Settings and Resources"'),
          'user/' . $user->uid . '/planning-tool') . ' from step two and determine
          where you want to introduce new programming at camp this summer. Decide
          what is realistic on your list of "fertile ground."'), 
        t('Have a conversation with the person/people at your camp who oversee
          the schedule to ensure that they understand the Initiative
          requirements and where you need space to be reserved in the
          schedule.'),
      ),
      '#theme' => 'item_list',
      '#prefix' => '<div class="checkbox-list">',
      '#suffix' => '</div>',      
    ),     
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-3') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-3/to-consider') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step3_consider_page() {
  $output =  array(
    'cosider-list' => array(
      '#items' => array(
        t('How many programs do we need to implement in order to fulfill
          the Initiative requirements? Is this realistic for my team?'), 
        t('Where do I see strengths and weaknesses across age groups? Do I need
          to seek additional staff support and/or
          adjust expectations in recognition of these? '),
        t('How can I use various settings to my advantage (specialties, bunk
          time, Shabbat, etc.) to be able to fulfill requirements that may be
          difficult to fulfill elsewhere?'),
        t('Who do I need to "bring on board" to be able to use those settings
          effectively?'),
      ),
    '#theme' => 'item_list',
      '#prefix' => '<div class="checkbox-list">',
      '#suffix' => '</div>',
    ),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-3/to-prepare') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-3/moving-forward') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step3_forward_page() {
  $output =  array(
    'display_form' => drupal_get_form('goodman_planning_tool_step3_form'),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-3/to-consider') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step4_page() {
  $output =  array(
    'introduction' => array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('After you complete the first three steps, you
        should have a strong foundation for choosing programs. For this final step,
        you should have a broad familiarity with the programs in the
        database, particularly around the theme (or themes) that you have
        chosen for the summer. Return to the database with an eye toward
        selecting programs that will help you fulfill your goals as you work
        to create a comprehensive programming plan for the summer.  ') . '</p>',
    ),
    'intro_pic' => array(
      '#theme' => 'image_formatter',
      '#item' => array(
        'uri' => drupal_get_path('module', 'goodman_planning_tool') . '/images/choose-apple.jpg',
        'alt' => 'Define Your Audience',
        'title' => 'Define Your Audience,'
        ),
      '#prefix' => '<div id="step3-image">',
      '#suffix' => '</div>',
    ),       
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-4/to-prepare') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step4_prepare_page() {
  $output =  array(
    'prepare-list' => array(
      '#items' => array(
        t('Review and assess the number of programs, the settings, and the
          challenges laid out in Step Three.'), 
        t('Review, again, the programs in the database under your selected
          theme(s), and create a list of programs that you believe are
          "good candidates" for implementation/adaptation.'),
        t('As you create a preliminary list, note the subjects that these
          activities address. Keep a parallel list of these subjects.'),
         t('Review, again, the programs outside your selected theme(s) to
           find any programs that may be complementary.'),
        t('Review the inventory of programs that you already do at camp, and
          add them to your list.'),
      ),
      '#theme' => 'item_list',
      '#prefix' => '<div class="checkbox-list">',
      '#suffix' => '</div>',      
    ),     
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-4') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-4/to-consider') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step4_consider_page() {
  $output =  array(
    'cosider-list' => array(
      '#items' => array(
        t('Which programs on my lists will be easy to create/adapt? Which are
          more challenging?'), 
        t('Do you have ideas for programs that do not appear in the database
          and do not already exist at camp that you would like to create
          (either as part of a matching grant program or on your own)?'),
        t('Are there common subjects among these programs, or does each
          program address a different subject? Can some of these programs be
          adjusted to address similar subjects?'),
        t('Does your list include an appropriate number of activities for each
          age group that you intend to reach?'),
        t('Does your list allow you to utilize the settings that you
          intended?'),
        ),
      '#type' => 'ul',
      '#attributes' => array('class' => 'custom-class'),
      '#theme' => 'item_list',
      '#prefix' => '<div class="checkbox-list">',
      '#suffix' => '</div>',
      ),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-4/to-prepare') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
    'continue_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('CONTINUE >>'),
      'program-planning-tool/step-4/moving-forward') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_step4_forward_page() {
  $output =  array(
    'intro' => array(
      '#type' => 'markup',
      '#markup' => '<div class="step4-intro">' . t('Use the worksheet below to enter
      the programs you plan to implement this summer as part of the Goodman
      Initiative. For each of the programs, you should indicate the ') . '<b>' . t('program
      setting') . '</b>' . t(' (where in camp the program will take place), ') . '<b>' . t('the degree of
      adaptation') . '</b>' . t(' (how much the program will need to be adapted from the
      version that is in the database) and the ') . '<b>' . t(' curricular subjects') . '</b>' . t(' that it will cover.') . '</div>',
    ),
    'note' => array(
      '#type' => 'markup',
      '#markup' => '<h3 class="note-header">Note:</h3> 
        <div class="note-body"> ' . t('The number of programs you enter
          here should be the same as what you entered in Step 3. Click "Add another program"
          to add new programs before you click "submit" to finish the worksheet') . '</div>',
      '#prefix' => '<div class="note">',
      '#suffix' => '</div>',
    ),        
    'display_form' => drupal_get_form('goodman_planning_tool_step4_form'),
    'back_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('<< BACK'),
      'program-planning-tool/step-4/to-consider') . '</div>',
    ),
    'main_link' => array(
      '#type' => 'markup',
      '#markup' => '<div class="next-step">' .
      l(t('MAIN PAGE'),
      'program-planning-tool') . '</div>',
    ),
  );

  return $output;
}

function goodman_planning_tool_user_page() {
   $userid = arg(1); //Get the user of the page we are on..

  $query_select = db_select('gpt') //Query the database to see of the user has a record.
  ->fields('gpt')
  ->condition('uid', $userid, '=')
  ->execute()
  ->fetchAssoc();
  
  $output =  array();
  
  if (achievements_unlocked_already('step-1', $userid)) {
    $output['step-1'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-1"><h2>Step #1</h2>
        <div class="step-question">We have chosen the following theme(s) for this summer at camp:</div>
        <div class="step-answer">' . $query_select['step1_q1'] . '</div>
        <div class="step-question">We chose this theme because:</div>
        <div class="step-answer">' . $query_select['step1_q2'] . '</div>
        <div class="step-question">We already do programming at camp around a theme like this in the following ways:</div>
        <div class="step-answer">' . $query_select['step1_q3'] . '</div>
        </div>',
    );
  } else {
    $output['step-1'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-1"><h2>Step #1</h2>
        <div class="step-incomplete">Step not yet completed.</div>
        </div>',
    );        
  }

  if (achievements_unlocked_already('step-2', $userid)) {  
    $output['step-2'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-2"><h2>Step #2</h2>
        <div class="step-question">Israel exists very strongly in these areas at camp:</div>
        <div class="step-answer">' . $query_select['step2_q1'] . '</div>
        <div class="step-question">These areas are "fertile ground" for developing Israel programs:</div>
        <div class="step-answer">' . $query_select['step2_q2'] . '</div>
        <div class="step-question">We plan to develop or enhance programming in the following areas:</div>
        <div class="step-answer">' . $query_select['step2_q3'] . '</div>
        </div>',
    );
  } else {
    $output['step-2'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-2"><h2>Step #2</h2>
        <div class="step-incomplete">Step not yet completed.</div>
        </div>',
    );    
  }

  if (achievements_unlocked_already('step-3', $userid)) {  
    $output['step-3'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-3"><h2>Step #3</h2>
        <div class="step-question">In order to fulfill the Initiative requirements, we must create/adapt this number of new programs:</div>
        <div class="step-answer">' . $query_select['step3_q1'] . '</div>
        <div class="step-question">We would like to create/adapt new programming in the following settings:</div>
        <div class="step-answer">' . $query_select['step3_q2'] . '</div>
        <div class="step-question">These are the challenges that we may face in implementing this many programs in these areas:</div>
        <div class="step-answer">' . $query_select['step3_q3'] . '</div>
        </div>',
    );
  } else {
    $output['step-3'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-3"><h2>Step #3</h2>
        <div class="step-incomplete">Step not yet completed.</div>
        </div>',
    );        
  }

  if (achievements_unlocked_already('step-4', $userid)) {  
    $program_name = unserialize($query_select['step4_q1']);
    $program_setting = unserialize($query_select['step4_q2']);
    $program_adaptation = unserialize($query_select['step4_q3']);
    $program_subjects = unserialize($query_select['step4_q4']);

    $count_array = count($program_name);
    if ($count_array == 0) {
      $count_array++;
    }
    
    $output['table-start'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-4"><h2>Step #4</h2>
      <table>
      <tr><th>Program</th><th>Setting</th><th>Adaptation</th><th>Subjects</th><tr>',  
    );
    
    $row_class = 'even';
    
    for ($i = 1; $i <= $count_array; $i++) {
      if($i%2 == 0)
      {
         $row_class = 'even';
      }
      else
      {
         $row_class = 'odd';
      }
      
      $output['row' .$i] = array(
        '#type' => 'markup',
        '#markup' => '<tr class="' . $row_class . '"><td>' .
        $program_name[$i] . '</td><td>' .
        $program_setting[$i] . '</td><td>' .
        $program_adaptation[$i] . '</td><td>' .
        $program_subjects[$i] . '</td></tr>',
      );
    }

    $output['table-end'] = array(
      '#type' => 'markup',
      '#markup' => '</table>',  
    );
  } else {
    $output['step-4'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-4"><h2>Step #4</h2>
        <div class="step-incomplete">Step not yet completed.</div>
        </div>',
    );        
  }
  
  return $output;
}
