
void FUN_00101ed0(void)

{
  return;
}




undefined8 FUN_0010209d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102139(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102158(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101bca(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101993(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00101c5d(long param_1,ulong param_2,long param_3)

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




void FUN_0010160c(undefined8 *param_1)

{
  fprintf(stdout,"%s\n",*param_1);
  return;
}




void FUN_00101f1d(void)

{
  return;
}




void FUN_00101833(void)

{
  long in_FS_OFFSET;
  undefined local_88 [8];
  undefined8 *local_80;
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
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  local_20 = 0;
  local_18 = 0;
  local_80 = &local_78;
  FUN_00101524(local_88,local_80);
  FUN_0010160c(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b49(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_0010140a(long *param_1,long param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  *param_1 = param_2;
  sVar1 = strlen((char *)*param_1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets((char *)(*param_1 + sVar1),100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_0010196d("fgets() failed");
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




int FUN_00101e5e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101edb(void)

{
  return;
}




void FUN_00101773(void)

{
  long in_FS_OFFSET;
  undefined local_88 [8];
  undefined8 *local_80;
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
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  local_20 = 0;
  local_18 = 0;
  local_80 = &local_78;
  FUN_00101642(local_88,local_80);
  FUN_00101682(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f33(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_001019c5(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101a6e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101efc(void)

{
  return;
}




void FUN_00101682(undefined8 *param_1)

{
  fprintf(stdout,(char *)*param_1);
  return;
}




void FUN_001021b0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010196d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101e99(void)

{
  return;
}




void FUN_00101ac4(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f3e(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101e78(void)

{
  return;
}




undefined8 FUN_00101e4f(void)

{
  return 0;
}




void FUN_00101524(long *param_1,long param_2)

{
  size_t sVar1;
  char *pcVar2;
  
  *param_1 = param_2;
  sVar1 = strlen((char *)*param_1);
  if (1 < 100 - sVar1) {
    pcVar2 = fgets((char *)(*param_1 + sVar1),100 - (int)sVar1,stdin);
    if (pcVar2 == (char *)0x0) {
      FUN_0010196d("fgets() failed");
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




ulong FUN_00101d61(long param_1,ulong param_2,long param_3)

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




void FUN_00102177(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00105038 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105038 = 1;
    return;
  }
  return;
}




void FUN_001014f2(undefined8 *param_1)

{
  fprintf(stdout,(char *)*param_1);
  return;
}




void FUN_00101b71(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101e8e(void)

{
  return;
}




undefined8 FUN_00101f75(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101f3e,local_18);
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




undefined8 FUN_001020c0(undefined8 *param_1)

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




void FUN_00101bfd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101eba(void)

{
  return;
}




void FUN_00101642(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1 = (undefined8 *)*param_1;
  *param_1 = 0x7274736465786966;
  param_1[1] = 0x74736574676e69;
  return;
}




void FUN_00101ef1(void)

{
  return;
}




void FUN_00101a99(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101a43(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101b9c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




bool FUN_00102042(pthread_t *param_1)

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




void FUN_00102220(void)

{
  return;
}




void FUN_00101ea4(void)

{
  return;
}




void FUN_00101ec5(void)

{
  return;
}




undefined8 FUN_00101908(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010196d("Calling good()...");
  FUN_001018f3();
  FUN_0010196d("Finished good()");
  FUN_0010196d("Calling bad()...");
  FUN_001016b3();
  FUN_0010196d("Finished bad()");
  return 0;
}




void FUN_00101f12(void)

{
  return;
}




void FUN_00101a19(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101f07(void)

{
  return;
}




void FUN_001019ed(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101ee6(void)

{
  return;
}




void FUN_00101aef(undefined4 param_1)

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




void FUN_00101e83(void)

{
  return;
}




void FUN_001016b3(void)

{
  long in_FS_OFFSET;
  undefined local_88 [8];
  undefined8 *local_80;
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
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
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
  local_20 = 0;
  local_18 = 0;
  local_80 = &local_78;
  FUN_0010140a(local_88,local_80);
  FUN_001014f2(local_88);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001018f3(void)

{
  FUN_00101773();
  FUN_00101833();
  return;
}




void FUN_00101eaf(void)

{
  return;
}




undefined8 FUN_00101e40(void)

{
  return 1;
}




void FUN_00101f28(void)

{
  return;
}



