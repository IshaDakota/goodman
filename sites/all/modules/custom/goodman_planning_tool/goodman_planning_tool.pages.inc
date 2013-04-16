<?php
/**
 * @file
 * Pages for the Personal Narrative Badge Module
 *
 */

function goodman_planning_tool_page() {
  $output =  array(
    'introduction' => array(
      '#type' => 'markup',
      '#markup' => '<p>' . t('
        Lorem ipsum dolor sit amet, consectetur adipiscing elit. Proin adipiscing
        tortor eget turpis dapibus malesuada a at metus. Sed feugiat, sem ut lacinia
        gravida, nisl urna rutrum purus, at cursus nisi diam ut libero. Duisdictum
        aliquam aliquam. Nulla facilisi. Lorem ipsum dolor sit amet, consectetur
        adipiscing elit. Donec sit amet lobortis justo. Aliquam eget enim ut massa
        elementum bibendum vitae at purus. Donec at est arcu. Etiam posuere dictum
        aliquam. Sed scelerisque rhoncus est nec convallis. Ut vehicula viverra
        hendrerit. Praesent tempus, nibh eu laoreet pharetra, nulla sem congue urna,
        nec pharetra turpis velit sed nisl. Class aptent taciti sociosqu ad litora
        torquent per conubia nostra, per inceptos himenaeos.'
      ),
    ),
    'quest_list' => array(
      '#type' => 'markup',
      '#markup' => '<ul class = "quest-list">
        <li class = "' . $quest1_status . '">' .
          l(t('Step One: Choosing a Thematic Approach'), 'program-planning-tool/step-1') . '</li>
        <li class = "' . $quest2_status . '">' .
          l(t('Step Two: Identifying Settings and Resources'), 'program-planning-tool/step-2') . '</li>
        <li class = "' . $quest3_status . '">' .
          l(t('Step Three: Defining Your Audience'), 'program-planning-tool/step-3') . '</li>
        <li class = "' . $quest3_status . '">' .
          l(t('Step Four: Choosing Programs & Managing Scope'), 'program-planning-tool/step-4') . '</li>
      </ul>',
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
    'prepare-list' => array(
      '#items' => array(
        t('Read the Initiative themes and reflect on them as they relate to you
          and your camp.'), 
        t('Sort the database by themes and browse the programs under each theme.'),
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