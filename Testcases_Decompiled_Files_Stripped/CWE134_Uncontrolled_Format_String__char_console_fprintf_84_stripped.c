
void FUN_00101ba5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102069(void)

{
  return;
}




undefined8 FUN_00101fa2(void)

{
  return 1;
}




void FUN_00102006(void)

{
  return;
}




void FUN_00101fda(void)

{
  return;
}




void FUN_00101cd3(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102380(void)

{
  return;
}




void FUN_00102048(void)

{
  return;
}




void FUN_00101d2c(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101ff0(void)

{
  return;
}




undefined8 FUN_00101fb1(void)

{
  return 0;
}




void FUN_00101a9a(undefined8 *param_1)

{
  fprintf(stdout,"%s\n",*param_1);
  return;
}




void FUN_00102032(void)

{
  return;
}




undefined8 FUN_001021ff(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010203d(void)

{
  return;
}




void FUN_0010157f(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  pvVar1 = operator_new(8);
                    /* try { // try from 00101629 to 0010162d has its CatchHandler @ 00101658 */
  FUN_00101940(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_00101980(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b4f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_001020d7(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001020a0,local_18);
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




void FUN_001022d9(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cfe(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101940(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0x7274736465786966;
  param_1[1] = 0x74736574676e69;
  return;
}




void _FINI_0(void)

{
  if (DAT_00105038 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_001013b0();
    DAT_00105038 = 1;
    return;
  }
  return;
}




int FUN_00101fc0(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101acf(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102027(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101404) */
/* WARNING: Removing unreachable block (ram,0x00101410) */

void FUN_001013e0(void)

{
  return;
}




void FUN_00101bfb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101c51(undefined4 param_1)

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




void FUN_00101980(undefined8 *param_1)

{
  fprintf(stdout,(char *)*param_1);
  return;
}




undefined8 FUN_00102222(undefined8 *param_1)

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




undefined8 FUN_001017c0(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101acf("Calling good()...");
  FUN_001017ab();
  FUN_00101acf("Finished good()");
  FUN_00101acf("Calling bad()...");
  FUN_00101469();
  FUN_00101acf("Finished bad()");
  return 0;
}




void FUN_001017ab(void)

{
  FUN_0010157f();
  FUN_00101695();
  return;
}




void FUN_00102011(void)

{
  return;
}




void FUN_00101cab(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102310(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101af5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c26(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00102074(void)

{
  return;
}




void FUN_0010190e(undefined8 *param_1)

{
  fprintf(stdout,(char *)*param_1);
  return;
}




void FUN_00101826(long *param_1,long param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  *param_1 = param_2;
  sVar1 = strlen((char *)*param_1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets((char *)(*param_1 + sVar1),100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101acf("fgets() failed");
      *(undefined *)(sVar1 + *param_1) = 0;
    }
    else {
      sVar1 = strlen((char *)*param_1);
      if ((sVar1 != 0) && (*(char *)(*param_1 + (sVar1 - 1)) == '\n')) {
        *(undefined *)(*param_1 + (sVar1 - 1)) = 0;
      }
    }
  }
  return;
}




void FUN_00101ffb(void)

{
  return;
}




void FUN_00102053(void)

{
  return;
}




void FUN_001022ba(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010207f(void)

{
  return;
}




void FUN_00101d5f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010208a(void)

{
  return;
}




void FUN_00102095(void)

{
  return;
}




void FUN_0010229b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b7b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013c3) */
/* WARNING: Removing unreachable block (ram,0x001013cf) */

void FUN_001013b0(void)

{
  return;
}




void FUN_00101bd0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101469(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  pvVar1 = operator_new(8);
                    /* try { // try from 00101513 to 00101517 has its CatchHandler @ 00101542 */
  FUN_00101826(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_0010190e(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010201c(void)

{
  return;
}




bool FUN_001021a4(pthread_t *param_1)

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




void FUN_001019b2(long *param_1,long param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  *param_1 = param_2;
  sVar1 = strlen((char *)*param_1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets((char *)(*param_1 + sVar1),100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_00101acf("fgets() failed");
      *(undefined *)(sVar1 + *param_1) = 0;
    }
    else {
      sVar1 = strlen((char *)*param_1);
      if ((sVar1 != 0) && (*(char *)(*param_1 + (sVar1 - 1)) == '\n')) {
        *(undefined *)(*param_1 + (sVar1 - 1)) = 0;
      }
    }
  }
  return;
}




void FUN_0010205e(void)

{
  return;
}




void FUN_001020a0(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b27(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




ulong FUN_00101ec3(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f00)();
  return;
}




void FUN_00101695(void)

{
  void *pvVar1;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  pvVar1 = operator_new(8);
                    /* try { // try from 0010173f to 00101743 has its CatchHandler @ 0010176e */
  FUN_001019b2(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_00101a9a(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fe5(void)

{
  return;
}




ulong FUN_00101dbf(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}



