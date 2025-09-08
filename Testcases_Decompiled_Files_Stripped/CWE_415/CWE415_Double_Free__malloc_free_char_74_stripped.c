
undefined8 FUN_0010247c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_001040dd(void)

{
  return;
}




void FUN_00104304(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102770(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102954(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_001032b0(undefined8 param_1,undefined8 param_2)

{
  FUN_00103374(param_1,param_2);
  return;
}




void FUN_00103d67(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001028b6(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a78(param_1,param_2,0);
  return;
}




undefined8 * FUN_00102744(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




undefined8 FUN_00101896(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b06(param_2);
  FUN_00101b18(param_1,uVar1);
  return param_1;
}




void FUN_0010212c(undefined8 param_1,undefined8 param_2)

{
  FUN_001027e8(param_1,param_2);
  FUN_0010282c(param_1,param_2);
  return;
}




void FUN_00104059(void)

{
  return;
}




void FUN_00101ad6(void)

{
  return;
}




void FUN_00102cbf(undefined8 param_1)

{
  FUN_001022c8(param_1);
  return;
}




void FUN_00101fef(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001027b0(param_1);
  FUN_001027d2(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101c46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_0010242c(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_0010219e(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001024a8(local_50);
    cVar2 = FUN_00101832(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001024a8(local_50);
      cVar2 = FUN_00101832(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_00102770(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_00102492(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_00102492(local_60);
          local_48[1] = 0;
          FUN_001024c6(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102744(local_48);
          uVar6 = FUN_001024a8(*puVar5);
          cVar2 = FUN_00101832(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102506(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010272e(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001024c6(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001026ba(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001026a4(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001026a4(local_60);
        uVar6 = FUN_001026a4(local_60);
        FUN_001026ba(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_00102702(local_48);
        uVar6 = FUN_001024a8(*puVar5);
        cVar2 = FUN_00101832(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102506(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010272e(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001024c6(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001026ba(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_00101fd4;
  }
  lVar3 = FUN_0010247c(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101ce8:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_00102492(local_60);
    uVar6 = FUN_001024a8(*puVar5);
    cVar2 = FUN_00101832(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101ce8;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_00102492(local_60);
    local_48[1] = 0;
    FUN_001024c6(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102506(local_60,param_3);
  }
LAB_00101fd4:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010407a(void)

{
  return;
}




undefined8 FUN_0010401a(void)

{
  return 0;
}




void FUN_0010406f(void)

{
  return;
}




void FUN_001040b1(void)

{
  return;
}




undefined8 FUN_0010398c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_00101b90(undefined8 param_1)

{
  return param_1;
}




void FUN_00103648(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001040e8(void)

{
  return;
}




undefined8 FUN_00102188(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104370(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




ulong FUN_00103f2c(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010282c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028a4(param_1);
  FUN_00102a46(uVar1,param_2,1);
  return;
}




void FUN_00104064(void)

{
  return;
}




void FUN_001029fe(undefined8 param_1)

{
  FUN_00102ba6(param_1);
  return;
}




undefined8 FUN_001017c4(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




void FUN_001027b0(long param_1)

{
  FUN_001029fe(param_1 + 0x20);
  return;
}




void FUN_0010163c(void)

{
  return;
}




void FUN_00103be4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010156c(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101650(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102bcc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001039a2(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_001039dc(param_2);
  FUN_001039ee(uVar1,uVar2);
  return;
}




undefined8 FUN_00101bb4(undefined8 param_1)

{
  return param_1;
}




long FUN_00103198(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_00103cba(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103316(undefined8 param_1)

{
  FUN_00103430(param_1);
  return;
}




void FUN_001040f3(void)

{
  return;
}




void FUN_00102ac8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b90(param_3);
  uVar1 = FUN_00101ba2(param_4);
  FUN_0010186c(local_38,uVar1);
  FUN_00101bb4(param_5);
  uVar1 = FUN_00101626(0x10,param_2);
                    /* try { // try from 00102b50 to 00102b54 has its CatchHandler @ 00102b57 */
  FUN_00102c0c(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c64(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001028e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101bb4(param_5);
  uVar2 = FUN_00101ba2(param_4);
  uVar3 = FUN_00101b90(param_3);
  FUN_00102ac8(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102290(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b06(param_2);
  FUN_001022f8(param_1,uVar1);
  return;
}




undefined8 FUN_00104140(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00104109,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




void FUN_001026ba(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102954(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102954(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00103336(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102188(param_1);
  FUN_00103440(param_1,uVar1);
  FUN_00103230(param_1);
  return;
}




undefined8 * FUN_00102702(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102f90(void)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103270(local_88);
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  local_58[0] = 0;
                    /* try { // try from 0010300f to 00103078 has its CatchHandler @ 001030c4 */
  puVar1 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar1 = __ptr;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar1 = __ptr;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar1 = __ptr;
  FUN_001032b0(local_58,local_88);
                    /* try { // try from 00103080 to 00103084 has its CatchHandler @ 001030af */
  FUN_001015cf(local_58);
  FUN_00103290(local_58);
  FUN_00103290(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027e8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101ae4(param_2);
  uVar2 = FUN_001028a4(param_1);
  FUN_00102a1c(uVar2,uVar1);
  return;
}




void FUN_00104109(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00101ba2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101bc6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_00102322(param_1);
  uVar2 = FUN_00101bb4(param_4);
  uVar3 = FUN_00101ba2(param_3);
  uVar4 = FUN_00101b90(param_2);
  FUN_0010234e(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




void FUN_0010234e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101626(0x30,param_2);
  uVar1 = FUN_00101bb4(param_5);
  uVar2 = FUN_00101ba2(param_4);
  uVar3 = FUN_00101b90(param_3);
  uVar4 = FUN_00101ae4(param_2);
  uVar5 = FUN_001028a4(param_1);
                    /* try { // try from 001023dd to 001023e1 has its CatchHandler @ 001023e4 */
  FUN_001028e4(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




long FUN_00103766(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_00103912(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103976(param_2);
                    /* try { // try from 001037d5 to 00103867 has its CatchHandler @ 00103893 */
    uVar2 = FUN_00103766(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_0010398c(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_00103912(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103976(local_38);
      uVar2 = FUN_00103766(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_0010398c(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 FUN_00101626(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_00102492(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00102ca1(undefined8 param_1)

{
  FUN_00102cbf(param_1);
  return;
}




void FUN_00101a36(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010219e(param_1);
  uVar2 = FUN_00102188(param_1);
  FUN_001021b4(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103634(void)

{
  return;
}




void FUN_001040d2(void)

{
  return;
}




int FUN_00104029(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001040fe(void)

{
  return;
}




undefined8 FUN_00101a86(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216a(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined4 FUN_001017ea(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101ad6(param_1);
  return unaff_EBX;
}




undefined8 FUN_0010351a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00101ae4(long param_1)

{
  FUN_00102272(param_1 + 0x20);
  return;
}




void FUN_00103270(undefined8 param_1)

{
  FUN_00103250(param_1);
  return;
}




undefined8 FUN_001028a4(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102954(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c8f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_001022c8(undefined8 param_1)

{
  FUN_0010288e(param_1);
  return;
}




void FUN_00103440(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010272e(local_28);
    FUN_00103440(param_1,uVar1);
    lVar2 = FUN_00102866(local_28);
    FUN_0010212c(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




void FUN_00103d14(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001015cf(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101650(param_1,&local_1c);
  local_18 = *puVar1;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104342(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001027d2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001040a6(void)

{
  return;
}




void FUN_00103c39(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001018ce(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001038d5(undefined8 param_1)

{
  FUN_0010316b(param_1);
  return;
}




void FUN_001031c6(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_001031f0(param_1);
  return;
}




void FUN_00103aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001039dc(param_3);
  FUN_00103ae6(param_1,param_2,uVar1);
  return;
}




undefined8
FUN_00102042(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_0010219e(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001024a8(param_3);
      uVar5 = FUN_00101fef(param_4);
      cVar1 = FUN_00101832(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001020c6;
      }
    }
  }
  bVar2 = true;
LAB_001020c6:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_0010216a(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00101810(undefined8 *param_1)

{
  FUN_00101ae4(*param_1);
  return;
}




void FUN_00103374(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_001034aa(param_1,param_2);
  lVar1 = FUN_0010351a(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_00103530(param_1);
                    /* try { // try from 001033cf to 001033d3 has its CatchHandler @ 001033d9 */
    uVar3 = FUN_00103546(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




long FUN_0010219e(long param_1)

{
  return param_1 + 8;
}




void FUN_001040c7(void)

{
  return;
}




undefined8 FUN_00102866(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_001024c6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102954(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102322(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001028a4(param_1);
  FUN_001028b6(uVar1,1);
  return;
}




long FUN_0010316b(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




undefined8 FUN_0010400b(void)

{
  return 1;
}




undefined8 FUN_00102ba6(undefined8 param_1)

{
  return param_1;
}




void FUN_00104090(void)

{
  return;
}




void FUN_00101b18(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b06(param_2);
  FUN_00102290(param_1,uVar1);
  return;
}




void FUN_0010186c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b50(param_1,param_2);
  return;
}




void FUN_001031f0(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




long FUN_001026a4(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00103a3a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101626(0x30,param_2);
  uVar1 = FUN_001039dc(param_3);
  uVar2 = FUN_00101ae4(param_2);
  uVar3 = FUN_001028a4(param_1);
  FUN_00103aa8(uVar3,uVar2,uVar1);
  return;
}




void FUN_0010409b(void)

{
  return;
}




void FUN_00103430(void)

{
  return;
}




void FUN_00102c0c(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102c5e(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001035b9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010370e(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_00102966(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216a(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103400(undefined8 param_1)

{
  FUN_001035aa(param_1);
  return;
}




undefined8 FUN_001022e6(undefined8 param_1)

{
  return param_1;
}




long FUN_00101650(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_0010177c(param_1,param_2);
  local_28 = FUN_001017a6(param_1);
  cVar2 = FUN_001017c4(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001017ea(param_1);
    uVar3 = FUN_00101810(&local_38);
    cVar2 = FUN_00101832(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001016f0;
    }
  }
  bVar1 = true;
LAB_001016f0:
  if (bVar1) {
    uVar3 = FUN_00101859(param_2);
    FUN_00101896(local_30,uVar3);
    FUN_001018ce(&local_28,&local_38);
    local_38 = FUN_001018f0(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_00101810(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined8 FUN_00101b06(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_0010272e(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_001038f3(undefined8 param_1)

{
  FUN_00103198(param_1);
  return;
}




undefined8 FUN_00103750(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103230(undefined8 param_1)

{
  FUN_00103316(param_1);
  return;
}




void FUN_00104043(void)

{
  return;
}




void FUN_00103290(undefined8 param_1)

{
  FUN_00103336(param_1);
  return;
}




void FUN_001040bc(void)

{
  return;
}




void FUN_001043e0(void)

{
  return;
}




void FUN_00103420(void)

{
  return;
}




void FUN_00103dc8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103b90(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001030f1(void)

{
  FUN_00102e3e();
  FUN_00102f90();
  return;
}




void FUN_0010216a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c0e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101509(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined4 local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_1c = 2;
  puVar1 = (undefined8 *)FUN_00101650(param_1,&local_1c);
  local_18 = (void *)*puVar1;
  free(local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a78(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102bf4(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




long FUN_00103530(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_001039dc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102bf4(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_0010177c(undefined8 param_1,undefined8 param_2)

{
  FUN_00101a36(param_1,param_2);
  return;
}




void FUN_00103d3c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010373c(void)

{
  return;
}




void FUN_00103b38(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010287c(undefined8 param_1)

{
  return param_1;
}




void FUN_001022f8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101b06(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_00102e3e(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103270(local_88);
  pvVar1 = malloc(100);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_58[0] = 0;
                    /* try { // try from 00102eae to 00102f17 has its CatchHandler @ 00102f63 */
  puVar2 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 1;
  puVar2 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar2 = pvVar1;
  local_58[0] = 2;
  puVar2 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar2 = pvVar1;
  FUN_001032b0(local_58,local_88);
                    /* try { // try from 00102f1f to 00102f23 has its CatchHandler @ 00102f4e */
  FUN_0010156c(local_58);
  FUN_00103290(local_58);
  FUN_00103290(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d95(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




undefined8 FUN_00103106(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103b38("Calling good()...");
  FUN_001030f1();
  FUN_00103b38("Finished good()");
  FUN_00103b38("Calling bad()...");
  FUN_00102cdd();
  FUN_00103b38("Finished bad()");
  return 0;
}




void FUN_001029b6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102b93(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102954(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00102c5e(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102ca1(param_2);
  puVar2 = (undefined4 *)FUN_001022e6(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_001017a6(undefined8 param_1)

{
  FUN_00101a86(param_1);
  return;
}




void FUN_00101b50(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001022c8(param_2);
  uVar1 = FUN_001022e6(uVar1);
  FUN_001022f8(param_1,uVar1);
  return;
}




void FUN_00104085(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00102272(undefined8 param_1)

{
  FUN_0010287c(param_1);
  return;
}




undefined4 * FUN_00103912(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001027b0(param_2);
  puVar2 = (undefined4 *)FUN_001039a2(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




bool FUN_0010420d(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00103ae6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_001039dc(param_3);
  puVar3 = (undefined8 *)FUN_00101626(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_0010242c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010216a(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bb8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




ulong FUN_00103e28(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102506(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00102188(param_1);
  local_50 = FUN_0010219e(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_00101fef(local_58);
    local_59 = FUN_00101832(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010272e(local_58);
    }
    else {
      local_58 = FUN_00102866(local_58);
    }
  }
  FUN_0010216a(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102966(param_1);
    cVar1 = FUN_001017c4(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_001029b6(local_38,&local_58,&local_50);
      goto LAB_00102688;
    }
    FUN_00102702(&local_48);
  }
  uVar2 = FUN_001024a8(local_48);
  cVar1 = FUN_00101832(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_00102770(local_38,&local_48,&local_40);
  }
  else {
    FUN_001029b6(local_38,&local_58,&local_50);
  }
LAB_00102688:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00101832(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00102bb8(void)

{
  return;
}




void FUN_00104323(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00103976(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_0010360a(undefined8 param_1,undefined8 param_2)

{
  FUN_0010373c(param_1,param_2);
  return;
}




void FUN_001034aa(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001035b9(param_1,param_2);
  FUN_00103634(param_1,param_2);
  FUN_001031c6(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010404e(void)

{
  return;
}




undefined8 FUN_00102b93(undefined8 param_1)

{
  return param_1;
}




void FUN_001035aa(void)

{
  return;
}




void FUN_00102cdd(void)

{
  void *__ptr;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103270(local_88);
  __ptr = malloc(100);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  local_58[0] = 0;
                    /* try { // try from 00102d5c to 00102dc5 has its CatchHandler @ 00102e11 */
  puVar1 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar1 = __ptr;
  local_58[0] = 1;
  puVar1 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar1 = __ptr;
  local_58[0] = 2;
  puVar1 = (undefined8 *)FUN_00101650(local_88,local_58);
  *puVar1 = __ptr;
  FUN_001032b0(local_58,local_88);
                    /* try { // try from 00102dcd to 00102dd1 has its CatchHandler @ 00102dfc */
  FUN_00101509(local_58);
  FUN_00103290(local_58);
  FUN_00103290(local_88);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102a46(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bcc(param_1,param_2,param_3);
  return;
}




void FUN_001024a8(undefined8 param_1)

{
  FUN_00101fef(param_1);
  return;
}




void FUN_001032da(long param_1)

{
  FUN_00103400(param_1);
  FUN_00103420(param_1);
  FUN_001031c6(param_1 + 8);
  return;
}




undefined8 FUN_001039ee(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102322(param_1);
  uVar2 = FUN_001039dc(param_2);
  FUN_00103a3a(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103546(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103648(local_18,param_1);
  FUN_00103666(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_0010370e(undefined8 param_1,undefined8 param_2)

{
  FUN_0010360a(param_1,param_2);
  return param_1;
}




undefined8 FUN_001021b4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_00101fef(local_38);
    cVar1 = FUN_00101832(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010272e(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102866(local_38);
    }
  }
  FUN_0010216a(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_0010428b(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00103b5e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_00103666(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_0010219e(param_1);
  uVar2 = FUN_00103750(param_2);
  uVar1 = FUN_00103766(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001026a4(param_1);
  uVar2 = FUN_001038d5(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_00102492(param_1);
  uVar2 = FUN_001038f3(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




undefined8 FUN_0010288e(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00101859(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a1c(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bb8(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_00103250(undefined8 param_1)

{
  FUN_001032da(param_1);
  return;
}




undefined8 FUN_00104268(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8
FUN_001018f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101bb4(param_5);
  uVar2 = FUN_00101ba2(param_4);
  uVar3 = FUN_00101b90(param_3);
  local_40 = FUN_00101bc6(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 0010196c to 001019af has its CatchHandler @ 001019ed */
  uVar1 = FUN_00101fef(local_40);
  local_38 = FUN_00101c46(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_0010212c(param_1,local_40);
    FUN_0010216a(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_00102042(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}



