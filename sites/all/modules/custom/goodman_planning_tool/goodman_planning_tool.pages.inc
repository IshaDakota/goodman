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
        The Planning Tool was developed in order to provide a method for GEs
        to ') . '<b>' . t('choose programs') . '</b>' . t(' for the summer and ') . 
        '<b>' . t('understand some of the challenges') . '</b>' . t(' they may
        face in implementation.') . '</p>
        <p><em>'. t('Each of the four steps to the tool has three sections:') . '</em>
        <ol>
        <li><b>' . t('To Prepare: ') . '</b>' . t('Here you will gather resources to which you should
          have access or questions you should be able to answer on the fly.') . '
        <li><b>' . t('Questions to Consider: ') . '</b>' . t('These questions may require some more thought or
                  consultation with other camp staff or your faculty advisor.') . '
        <li><b>' . t('Moving Forward: ') . '</b>' . t('In this section, you will fill out a worksheet with
                  specific answers to questions about your program planning. These answers
                  will be saved so that you can use them as you continue planning.') . '
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
          l(t('Step One: Choosing a Thematic Approach'), 'program-planning-tool/step-1') . '</li>
        <li class = "' . $step2_status . '">' .
          l(t('Step Two: Identifying Settings and Resources'), 'program-planning-tool/step-2') . '</li>
        <li class = "' . $step3_status . '">' .
          l(t('Step Three: Defining Your Audience'), 'program-planning-tool/step-3') . '</li>
        <li class = "' . $step4_status . '">' .
          l(t('Step Four: Choosing Programs & Managing Scope'), 'program-planning-tool/step-4') . '</li>
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
        You do not need to finish all four steps at once -- in fact, it will
        likely be better for you to divide this work over several weeks, and
        one or two conversations with your faculty advisor. You may also find
        that you have done some of the work in this tool... that\'s great!
        Complete the worksheets in order, and use the "questions to consider"
        as a way to rethink some of your work.') . '</p>
        <p>' . t('Your progress will be saved both on the list above and in
        your user profile under ') . l(t('Achievements'), 'user/' .
        $user->uid .'/achievements') . t('. You will also be able to see
        your answers to the "moving forward" worksheets in your user profile
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
        rethink programming that you are already doing at camp.') . '</p>',
    ),
    'note' => array(
      '#type' => 'markup',
      '#markup' => '<h3 class="note-header">Note:</h3> 
        <div class="note-body"> ' . t('The purpose of a thematic approach is to
        assist in organizing educational programming, not to complicate it. As we
        discussed at the Israel Seminar, THEMES help us better organize our SUBJECTS, to
        more fully teach and express our VALUES. The Initiative themes - while
        specific to Modern Israel History - are broad enough to reflect many of the
        themes we already teach at camp.') . '</div>',
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
        exploring the database of activities, this would be a good time to
        start! Links below will organize content by themes, and will open
        in new windows so that you can keep your place in the tool.') . '</div>',
      '#prefix' => '<div class="note">',
      '#suffix' => '</div>',
    ),    
    'prepare-list' => array(
      '#items' => array(
        l(t('Read the Initiative themes'), 'themes-values', array('attributes' => array('target'=>'_blank'))) . t(' and reflect on them as they relate to you
          and your camp.'), 
        l(t('Sort the database by themes'), 'sort/theme', array('attributes' => array('target'=>'_blank'))) . t(' and browse the programs under each theme.'),
        t('Note that many programs do appear under multiple themes.')
      ),
    '#theme' => 'item_list',
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
        that you consider these questions (and the others in this category) carefully,
        but that you do not get stuck on them. These questions are supposed to help you
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
        t('How might themes look differently across different age groups in
          camp?'),
        t('Could you imagine these themes working sequentially in your
          camp year after year? If so, how might you order a three-year plan?
          A five-year plan?'),
        t('Could you see a way in which multiple themes might work together
          during one summer? What might be the strengths and challenges of
          such an approach?'),        
      ),
    '#theme' => 'item_list',
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
        see this as well.') . '</div>',
      '#prefix' => '<div class="note">',
      '#suffix' => '</div>',
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
        identify things that you are already doing that will contribute to
        your thematic approach, and find areas where you can easily create
        new programs.') . '</p>',
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
        t('Look in the database under your chosen theme to be aware of the
          suggested settings for some of the written activities.'),
        t('Create an inventory of the "tried and true" Israel programs that
          you already do at your camp -- programs that you want to continue to
          do in the future.'),
      ),
      '#theme' => 'item_list',
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
          your camp?'),
        t('How can the theme(s) you chose work within those settings?'),        
      ),
    '#theme' => 'item_list',
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
      '#markup' => '<p>' . t('The Initiative requires that you create
        programming space for two hours each week per camper across your
        age groups (except for the youngest age groups, for which only one
        hour per week is required). The goal of this requirement is to create
        a camp-wide approach to Israel education that is achievable within
        your camp framework.') . '</p>',
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
        t('Evaluate the "settings and resources" from step two and determine
          where you might like to introduce new programming at camp. Decide
          what is realistic on your list of "fertile ground."'), 
        t('Have a conversation with the person/people at your camp who "hold
          the schedule" to ensure that they understand the Initiative
          requirements and where you need space to be reserved in the
          schedule.'),
      ),
      '#theme' => 'item_list',
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
        t('Where are my strengths and weaknesses across age groups? Do I need
          to adjust expectations in recognition of these? '),
        t('How can I use various settings to my advantage (specialties, bunk
          time, Shabbat, etc.) to be able to fulfill requirements that may be
          difficult to fulfill elsewhere?'),
        t('Who do I need to "bring on board" to be able to use those settings
          effectively?'),
      ),
    '#theme' => 'item_list',
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
        should have a strong foundation for choosing programs. This final step
        will require you to have a broad familiarity with the programs in the
        database, particularly around the theme (or themes) that you have
        chosen for the summer. Return to the database with an eye toward
        selecting programs that will help you satisfy your goals as you work
        to create a comprehensive programming plan for the summer.  ') . '</p>',
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
        t('As you create a preliminary list, note also the subjects that these
          activities address. Keep a parallel list of these subjects.'),
         t('Review, again, the programs outside your selected theme(s) to
           find any programs that may be complementary.'),
        t('Review the inventory of programs that you already do at camp, and
          add them to your list.'),
      ),
      '#theme' => 'item_list',
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
        t('Do you have ideas for programs that do not appear in the  database
          and do not already exist at your camp that you would like to create
          (either as part of a matching grant program or on your own)?'),
        t('Are there common subjects among these programs, or does each
          program address a different subject? Can some of these programs be
          re-tooled to address similar subjects?'),
        t('Does your list include an appropriate number of activities for each
          age group that you intend to reach?'),
        t('Does your list allow you to utilize the settings that you
          intended?'),
        ),
    '#theme' => 'item_list',
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
    global $user; //Get the current user.

  $query_select = db_select('gpt') //Query the database to see of the user has a record.
  ->fields('gpt')
  ->condition('uid', $user->uid, '=')
  ->execute()
  ->fetchAssoc();
  
  $output =  array();
  
  if (achievements_unlocked_already('step-1', $user->uid)) {
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

  if (achievements_unlocked_already('step-2', $user->uid)) {  
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

  if (achievements_unlocked_already('step-3', $user->uid)) {  
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

  if (achievements_unlocked_already('step-4', $user->uid)) {
    $output['step-4'] = array(
      '#type' => 'markup',
      '#markup' => '<div class="step-3"><h2>Step #4</h2>
        <div class="step-question">These are the programs that we plan to create/adapt at camp this summer:</div>
        <div class="step-answer">' . $query_select['step4_q1'] . '</div>
        <div class="step-question">These are the subjects that our programs will cover:</div>
        <div class="step-answer">' . $query_select['step4_q2'] . '</div>
        <div class="step-question">The following programs will require significant adaptation for our camp:</div>
        <div class="step-answer">' . $query_select['step4_q3'] . '</div>
        <div class="step-question">The following programs will require little/or no adaptation for our camp:</div>
        <div class="step-answer">' . $query_select['step4_q4'] . '</div>
        <div class="step-question">The following settings will be utilized at camp:</div>
        <div class="step-answer">' . $query_select['step4_q5'] . '</div>
        </div>',  
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
