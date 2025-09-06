
void FUN_001017c6(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104018 == '\0') {
    if (PTR___cxa_finalize_00103ff8 != (undefined *)0x0) {
      FUN_00101180(PTR_LOOP_00104008);
    }
    FUN_00101310();
    DAT_00104018 = 1;
    return;
  }
  return;
}




void FUN_00101e20(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101acc(void)

{
  return 0;
}




void FUN_00101b8f(void)

{
  return;
}




void FUN_001016c0(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




bool FUN_00101cbf(pthread_t *param_1)

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




undefined8 FUN_00101bf2(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101bbb,local_18);
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




void FUN_0010176c(undefined4 param_1)

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




void FUN_00101ba5(void)

{
  return;
}




void FUN_00101af5(void)

{
  return;
}




int FUN_00101adb(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001015cb(undefined8 param_1)

{
  FUN_001013e8(param_1);
  return;
}




void FUN_0010166a(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017ee(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00101b21(void)

{
  return;
}




void FUN_00101b63(void)

{
  return;
}




void FUN_00101db6(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101b79(void)

{
  return;
}




void FUN_00101b42(void)

{
  return;
}




void FUN_00101531(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 5;
    FUN_00101642(*param_1);
    free(param_1);
  }
  return;
}




void FUN_00101bb0(void)

{
  return;
}




void FUN_00101b37(void)

{
  return;
}




undefined8 FUN_00101d1a(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101dd5(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_0010156e(undefined8 param_1)

{
  FUN_001014fb(param_1);
  return;
}




void FUN_00101b00(void)

{
  return;
}




void FUN_001014fb(undefined4 *param_1)

{
  *param_1 = 5;
  FUN_00101642(*param_1);
  free(param_1);
  return;
}




undefined8 FUN_00101abd(void)

{
  return 1;
}




void FUN_00101b4d(void)

{
  return;
}




void FUN_001015ea(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




ulong FUN_001018da(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010187a(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010143f(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,4);
  FUN_001015cb(pvVar1);
  return;
}




void FUN_00101b6e(void)

{
  return;
}




void FUN_00101610(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101180(void)

{
  (*(code *)PTR___cxa_finalize_00103ff8)();
  return;
}




void FUN_00101b0b(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101323) */
/* WARNING: Removing unreachable block (ram,0x0010132f) */

void FUN_00101310(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101364) */
/* WARNING: Removing unreachable block (ram,0x00101370) */

void FUN_00101340(void)

{
  return;
}




void FUN_001013c9(undefined8 param_1)

{
  FUN_0010156e(param_1);
  return;
}




void FUN_001015ac(undefined8 param_1)

{
  FUN_001013c9(param_1);
  return;
}




void FUN_00101407(void)

{
  void *pvVar1;
  
  pvVar1 = realloc((void *)0x0,4);
  FUN_001015ac(pvVar1);
  return;
}




void FUN_00101642(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101696(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001013e8(undefined8 param_1)

{
  FUN_0010158d(param_1);
  return;
}




void FUN_00101847(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101b9a(void)

{
  return;
}




void FUN_00101b2c(void)

{
  return;
}




undefined8 FUN_0010148c(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001015ea("Calling good()...");
  FUN_00101477();
  FUN_001015ea("Finished good()");
  FUN_001015ea("Calling bad()...");
  FUN_00101407();
  FUN_001015ea("Finished bad()");
  return 0;
}




void FUN_00101e90(void)

{
  return;
}




void FUN_00101477(void)

{
  FUN_0010143f();
  return;
}




void FUN_00101bbb(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101df4(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_0010158d(undefined8 param_1)

{
  FUN_00101531(param_1);
  return;
}




undefined8 FUN_00101d3d(undefined8 *param_1)

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




void FUN_00101020(void)

{
  (*(code *)PTR_00103f28)();
  return;
}




void FUN_00101716(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101b84(void)

{
  return;
}




void FUN_00101b16(void)

{
  return;
}




void FUN_00101819(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




ulong FUN_001019de(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016eb(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101741(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b58(void)

{
  return;
}



