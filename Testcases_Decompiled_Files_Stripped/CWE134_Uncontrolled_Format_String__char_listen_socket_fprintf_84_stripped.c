
void FUN_0010190d(void)

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
                    /* try { // try from 001019b7 to 001019bb has its CatchHandler @ 001019e6 */
  FUN_0010156a(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_001015aa(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_001021bf(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010309c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001022d6(void)

{
  return;
}




void FUN_00101df1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void _FINI_0(void)

{
  if (DAT_00105028 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_001014b0();
    DAT_00105028 = 1;
    return;
  }
  return;
}




void FUN_001022e1(void)

{
  return;
}




undefined8 FUN_001022ad(void)

{
  return 0;
}




void FUN_00102302(void)

{
  return;
}




void FUN_0010230d(void)

{
  return;
}




void FUN_00102344(void)

{
  return;
}




void FUN_0010235a(void)

{
  return;
}




undefined8 FUN_0010229e(void)

{
  return 1;
}




void FUN_001022ec(void)

{
  return;
}




void FUN_00101e23(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ecc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001017f7(void)

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
                    /* try { // try from 001018a1 to 001018a5 has its CatchHandler @ 001018d0 */
  FUN_00101bb4(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_00101d9a(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102323(void)

{
  return;
}




void FUN_00101dcb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101f22(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101e77(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001017c2(undefined8 *param_1)

{
  fprintf(stdout,"%s\n",*param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101504) */
/* WARNING: Removing unreachable block (ram,0x00101510) */

void FUN_001014e0(void)

{
  return;
}




void FUN_00101a23(void)

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
                    /* try { // try from 00101acd to 00101ad1 has its CatchHandler @ 00101afc */
  FUN_001015dc(pvVar1,&local_88);
  if (pvVar1 != (void *)0x0) {
    FUN_001017c2(pvVar1);
    operator_delete(pvVar1,8);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102597(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102370(void)

{
  return;
}




void FUN_001025d5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101f4d(undefined4 param_1)

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




void FUN_00101fcf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_001022bc(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ef7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102365(void)

{
  return;
}




void FUN_001022f7(void)

{
  return;
}




void FUN_00101bb4(long *param_1,long param_2)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  int local_44;
  sockaddr local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
  local_44 = -1;
  sVar2 = strlen((char *)*param_1);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_28,0,0x10);
    local_28.sa_family = 2;
    local_28.sa_data[2] = '\0';
    local_28.sa_data[3] = '\0';
    local_28.sa_data[4] = '\0';
    local_28.sa_data[5] = '\0';
    local_28.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_44 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_44 != -1)) {
      sVar3 = recv(local_44,(void *)(*param_1 + sVar2),99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        *(undefined *)(*param_1 + sVar2 + (long)iVar1) = 0;
        pcVar4 = strchr((char *)*param_1,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr((char *)*param_1,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_0010251e(undefined8 *param_1)

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




void FUN_00102318(void)

{
  return;
}




void FUN_0010232e(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */

void FUN_001014b0(void)

{
  return;
}




void FUN_00101d9a(undefined8 *param_1)

{
  fprintf(stdout,(char *)*param_1);
  return;
}




void FUN_001015aa(undefined8 *param_1)

{
  fprintf(stdout,(char *)*param_1);
  return;
}




void FUN_00101b39(void)

{
  FUN_0010190d();
  FUN_00101a23();
  return;
}




bool FUN_001024a0(pthread_t *param_1)

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




void FUN_0010237b(void)

{
  return;
}




void FUN_001025b6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102386(void)

{
  return;
}




void FUN_00102391(void)

{
  return;
}




void FUN_0010156a(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0x7274736465786966;
  param_1[1] = 0x74736574676e69;
  return;
}




void FUN_00102028(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00102339(void)

{
  return;
}




undefined8 FUN_00101b4e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00101dcb("Calling good()...");
  FUN_00101b39();
  FUN_00101dcb("Finished good()");
  FUN_00101dcb("Calling bad()...");
  FUN_001017f7();
  FUN_00101dcb("Finished bad()");
  return 0;
}




void FUN_00101e4b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_0010234f(void)

{
  return;
}




void FUN_0010239c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102600(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001023d3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_0010239c,local_18);
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




void FUN_00101020(void)

{
  (*(code *)PTR_00104ec0)();
  return;
}




undefined8 FUN_001024fb(void *param_1)

{
  free(param_1);
  return 1;
}




ulong FUN_001020bb(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102670(void)

{
  return;
}




void FUN_00101ea1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101ffa(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010205b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_001015dc(long *param_1,long param_2)

{
  int __fd;
  int iVar1;
  size_t sVar2;
  ssize_t sVar3;
  char *pcVar4;
  long in_FS_OFFSET;
  int local_44;
  sockaddr local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_1 = param_2;
  local_44 = -1;
  sVar2 = strlen((char *)*param_1);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_28,0,0x10);
    local_28.sa_family = 2;
    local_28.sa_data[2] = '\0';
    local_28.sa_data[3] = '\0';
    local_28.sa_data[4] = '\0';
    local_28.sa_data[5] = '\0';
    local_28.sa_data._0_2_ = htons(0x6987);
    iVar1 = bind(__fd,&local_28,0x10);
    if (((iVar1 != -1) && (iVar1 = listen(__fd,5), iVar1 != -1)) &&
       (local_44 = accept(__fd,(sockaddr *)0x0,(socklen_t *)0x0), local_44 != -1)) {
      sVar3 = recv(local_44,(void *)(*param_1 + sVar2),99 - sVar2,0);
      iVar1 = (int)sVar3;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        *(undefined *)(*param_1 + sVar2 + (long)iVar1) = 0;
        pcVar4 = strchr((char *)*param_1,0xd);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
        pcVar4 = strchr((char *)*param_1,10);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  if (local_44 != -1) {
    close(local_44);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00101fa7(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}



