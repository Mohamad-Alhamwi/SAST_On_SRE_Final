
void FUN_001017cd(void)

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
                    /* try { // try from 00101877 to 0010187b has its CatchHandler @ 001018a6 */
  FUN_001014aa(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_0010156c(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101fd9(void)

{
  return;
}




void FUN_00101b99(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101cf2(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001022ae(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c1a(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101a92(undefined8 *param_1)

{
  fprintf(stdout,(char *)*param_1);
  return;
}




void FUN_00102073(void)

{
  return;
}




void FUN_00102370(void)

{
  return;
}




undefined8 FUN_00101fa5(void)

{
  return 0;
}




void FUN_00101ae9(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c9f(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101bc4(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x00101450) */

void FUN_00101420(void)

{
  return;
}




ulong FUN_00101eb7(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001030d8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102031(void)

{
  return;
}




undefined8 FUN_00101f96(void)

{
  return 1;
}




void FUN_001015a1(void)

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
                    /* try { // try from 0010164b to 0010164f has its CatchHandler @ 0010167a */
  FUN_0010195e(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_00101a20(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




bool FUN_00102198(pthread_t *param_1)

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




void FUN_0010201b(void)

{
  return;
}




void FUN_0010205d(void)

{
  return;
}




void FUN_00101ac3(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102300(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ef0)();
  return;
}




undefined8 FUN_001020cb(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102094,local_18);
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




void FUN_00101bef(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_001013f0();
    DAT_00105028 = 1;
    return;
  }
  return;
}




ulong FUN_00101db3(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001030d0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001018f8(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101ac3("Calling good()...");
  FUN_001018e3();
  FUN_00101ac3("Finished good()");
  FUN_00101ac3("Calling bad()...");
  FUN_001015a1();
  FUN_00101ac3("Finished bad()");
  return 0;
}




void FUN_00101a20(undefined8 *param_1)

{
  fprintf(stdout,(char *)*param_1);
  return;
}




void FUN_0010203c(void)

{
  return;
}




void FUN_00101d20(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_00102216(undefined8 *param_1)

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




void FUN_00101a52(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0x7274736465786966;
  param_1[1] = 0x74736574676e69;
  return;
}




void FUN_00102068(void)

{
  return;
}




void FUN_001014aa(long *param_1,long param_2)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  *param_1 = param_2;
  sVar1 = strlen((char *)*param_1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets((char *)(*param_1 + sVar1),100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        FUN_00101ac3("fgets() failed");
        *(undefined *)(sVar1 + *param_1) = 0;
      }
      fclose(__stream);
    }
  }
  return;
}




void FUN_0010195e(long *param_1,long param_2)

{
  size_t sVar1;
  FILE *__stream;
  char *pcVar2;
  
  *param_1 = param_2;
  sVar1 = strlen((char *)*param_1);
  if (1 < 100 - sVar1) {
    __stream = fopen("/tmp/file.txt","r");
    if (__stream != (FILE *)0x0) {
      pcVar2 = fgets((char *)(*param_1 + sVar1),100 - (int)sVar1,__stream);
      if (pcVar2 == (char *)0x0) {
        FUN_00101ac3("fgets() failed");
        *(undefined *)(sVar1 + *param_1) = 0;
      }
      fclose(__stream);
    }
  }
  return;
}




void FUN_00101fe4(void)

{
  return;
}




void FUN_0010207e(void)

{
  return;
}




void FUN_001022cd(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101cc7(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_00101fb4(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102052(void)

{
  return;
}




void FUN_00101fef(void)

{
  return;
}




void FUN_00101b1b(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ffa(void)

{
  return;
}




void FUN_00102005(void)

{
  return;
}




void FUN_00102047(void)

{
  return;
}




void FUN_001016b7(void)

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
                    /* try { // try from 00101761 to 00101765 has its CatchHandler @ 00101790 */
  FUN_00101a52(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_00101a92(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102094(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001018e3(void)

{
  FUN_001016b7();
  FUN_001017cd();
  return;
}




void FUN_00101d53(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001021f3(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102026(void)

{
  return;
}




void FUN_0010228f(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101403) */
/* WARNING: Removing unreachable block (ram,0x0010140f) */

void FUN_001013f0(void)

{
  return;
}




void FUN_00101fce(void)

{
  return;
}




void FUN_00102010(void)

{
  return;
}




void FUN_0010156c(undefined8 *param_1)

{
  fprintf(stdout,"%s\n",*param_1);
  return;
}




void FUN_00101b6f(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102089(void)

{
  return;
}




void FUN_00101c45(undefined4 param_1)

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




void FUN_00101b43(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}



